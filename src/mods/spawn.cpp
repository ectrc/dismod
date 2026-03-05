#include <vector>

#include "spawn.h"

#include "engine/engine.h"
#include "sdk.hpp"
#include "logger.h"
#include "hooks/dishonored/locomotion.h"
#include "hooks/engine/static_find_object.h"

auto mods::handle_npc_requests(UWorld* world, std::vector<NPCSpawnRequest>& requests) -> void {
  for (NPCSpawnRequest &request : requests) {
    handle_single_npc_request(world, request);
  }
}

auto mods::handle_single_npc_request(UWorld* world, NPCSpawnRequest request) -> void {
  const auto player_controller = reinterpret_cast<ADishonoredPlayerController*>(get_state()->engine->GamePlayers[0]->Actor);
  if (player_controller == nullptr) {
    LOG("player controller is null");
    return;
  }

  FVector original_location = player_controller->Location;
  FRotator spawn_rotation = player_controller->Rotation;
  get_player_viewpoint_hook::instance()->hook_.original()(player_controller, &original_location, &spawn_rotation);

  FVector look_vector = {};
  frotator_to_look_vector_hook::instance()->hook_.original()(&spawn_rotation, &look_vector);
  FVector end = {};
  end.X = original_location.X + look_vector.X * 10000;
  end.Y = original_location.Y + look_vector.Y * 10000;
  end.Z = original_location.Z + look_vector.Z * 10000;

  FCheckResult check = {};
  uworld_line_check_hook::instance()->hook_.original()(world, &check, player_controller->Pawn, &end, &original_location, ETraceFlags::TRACE_World, player_controller->Pawn->GetCollisionExtent(), nullptr);

  const auto check_valid = []<typename T>(const std::wstring& pathname) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");

    auto existing = static_find_object_hook::instance()->hook_.original()(T::StaticClass(), nullptr, pathname.c_str(), true);
    if (existing == nullptr) return nullptr;
    if (!existing->Name.IsValid()) return nullptr;

    return (T*)existing;
  };

  const auto existing_npc_tweak = check_valid.operator()<UDisTweaks_NPCPawn>(request.npc_tweaks_name);
  const auto existing_ai_tweak = check_valid.operator()<UDisTweaks_AIBrain>(request.ai_tweaks_name);
  const auto existing_faction_tweak = check_valid.operator()<UDisTweaks_Faction>(request.faction_tweak);

  if (!request.loaded_package && (!existing_npc_tweak || !existing_ai_tweak || !existing_faction_tweak)) {
    auto* heap_request = new NPCSpawnRequest(request);

    engine::LoadPackageAsync(request.package_name.c_str(), [](UObject* thing, void* request) -> void {
      const auto casted_request = static_cast<NPCSpawnRequest *>(request);
      mods::handle_single_npc_request_stepped(casted_request);
    }, heap_request, new FGuid());

    return;
  }

  auto load_and_duplicate = [&]<typename T>(T* existing, const std::wstring& pathname) -> std::optional<T*> {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");

    if (!existing) {
      const auto loaded = engine::LoadObject<T>( nullptr, pathname.c_str(), nullptr, engine::load_flags::seek_free, nullptr);
      if (loaded == nullptr) {
        LOG("Failed to load from disk!");
        return std::nullopt;
      }

      existing = loaded;
    }

    T* duplicated = engine::DuplicateObject<T>(existing, existing, L"None");
    if (duplicated == nullptr) {
      LOG("Failed to duplicate from disk!");
      return std::nullopt;
    }

    return duplicated;
  };

  const auto world_info = reinterpret_cast<ADishonoredGameInfo*>(world->m_pWorldInfo->Game);
  if (!world_info) {
    LOG("Failed to get world_info!");
    return;
  }
  LOG("{}", world_info->GetFullName());

  const auto npc_tweak = load_and_duplicate.operator()<UDisTweaks_NPCPawn>(existing_npc_tweak, request.npc_tweaks_name);
  if (!npc_tweak.has_value()) {
    LOG("Failed to load npc_tweaks!");
    return;
  }

  const auto ai_tweak = load_and_duplicate.operator()<UDisTweaks_AIBrain>(existing_ai_tweak, request.ai_tweaks_name);
  if (!ai_tweak.has_value()) {
    LOG("Failed to load ai_tweak!");
    return;
  }
  npc_tweak.value()->m_pBrainTweak = ai_tweak.value();

  const auto faction_tweak = load_and_duplicate.operator()<UDisTweaks_Faction>(existing_faction_tweak, request.faction_tweak);
  if (!faction_tweak.has_value()) {
    LOG("Failed to load faction_tweak!");
    return;
  }
  npc_tweak.value()->m_pFactionTweak = faction_tweak.value();

  const auto controller = reinterpret_cast<ADishonoredNPCController*>(engine::spawn_actor(world, ADishonoredNPCController::StaticClass(), 0, &check.Location));
  if (!controller) {
    LOG("Failed to spawn controller!");
    return;
  }

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(npc_tweak.value(), EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, &check.Location, nullptr, nullptr, 0, 1, controller));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return;
  }

  actor->Role = ENetRole::ROLE_Authority;
  actor->m_NPCID = world_info->m_NextNPCID;
  world_info->m_NextNPCID++;

  controller->Possess(actor);
  controller_init_npc_hook::instance()->hook_.original()(controller, npc_tweak.value()->m_pBrainTweak, EDisAISuspicionLevel::DAISL_Unsuspecting);
  controller->m_pAIBrain->m_pBrainTweaks->m_VersionNum = 696969;

  get_state()->spawned_npcs.emplace_back(actor->m_NPCID);

  // FArkComponentLookAt_StartLookAtLocation_hook::instance()->hook_.original()(reinterpret_cast<FArkComponentLookAt *>(actor->m_pCpntLookat.Dummy),
  //   actor, &actor->Name, 1, player_controller->Pawn->Location, {
  //     .m_fHeadInfluence = 100.0f,
  //     .m_fTorsoInfluence = 99999.0f,
  //     .m_bTorsoInfIsMoveSpeedDependant = true
  //   }, 180.0f
  // );

  // auto rotation_intent = actor->m_NPCRotationIntent[static_cast<size_t>(EDisFaceToPriority::DisFaceToPriority_AILoco)];
  // FDisNPCRotationIntent_SetTargetRotation_hook::instance()->hook_.original()(&rotation_intent, actor, player_controller->Pawn->Location, 400.f, 200.f, EDisFaceToPriority::DisFaceToPriority_AILoco, player_controller, player_controller->Name);
  // actor->m_CurrentNPCRotationPriority = EDisFaceToPriority::DisFaceToPriority_AILoco;

  // const auto brain = reinterpret_cast<UDishonoredAIBrain *>(engine::StaticConstructObject(npc_tweak.value()->m_pBrainTweak->m_pSpawnedObjectClass, controller, "AIBrain"));
  // if (!brain) {
  //   LOG("Failed to spawn brain!");
  //   return;
  // }
  // brain->m_pBrainComponentContainer = engine::ConstructObject<UArkComponentContainer>(brain);

  // controller->Possess(actor);
  // controller->m_pAIBrain = brain;
  // init_brain_hook::instance()->hook_.original()(brain, actor, npc_tweak.value()->m_pBrainTweak, EDisAISuspicionLevel::DAISL_Unsuspecting);

  // const auto Action = engine::ConstructObject<UDisSeqAct_DialogScriptedChoice>(world, 0);
  // Action->m_bUseTitle = 1;
  // Action->m_Title = *(new FString(L"HELLOOOO"));
  // Action->m_Choices.push_back({
  //   .m_ChoiceText = *(new FString(L"HELLOOOO")),
  //   .m_bDisablePlayerInputUntilMapChange = 0
  // });
  // Action->m_Choices.push_back({
  //   .m_ChoiceText = *(new FString(L"asd")),
  //   .m_bDisablePlayerInputUntilMapChange = 0
  // });
  // Action->eventActivated();
}

auto mods::handle_single_npc_request_stepped(NPCSpawnRequest* request) -> void {
  request->loaded_package = true;

  const auto aa = std::string(request->ai_tweaks_name.begin(), request->ai_tweaks_name.end());
  LOG("package {}", aa.c_str());

  get_state()->event_queue.push( {
    .package_name = request->package_name,
    .npc_tweaks_name = request->npc_tweaks_name,
    .ai_tweaks_name = request->ai_tweaks_name,
    .faction_tweak = request->faction_tweak,
    .loaded_package = true,
  });
}
