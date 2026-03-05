#include <vector>

#include "spawn.h"

#include "engine/engine.h"
#include "sdk.hpp"
#include "logger.h"
#include "world.h"

#include "hooks/dishonored/locomotion.h"
#include "hooks/dishonored/npc.h"
#include "hooks/dishonored/world.h"
#include "hooks/engine/load_package_async.h"
#include "hooks/engine/spawn_actor_from_tweaks.h"
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

  const auto check_valid = []<typename T>(const std::wstring& pathname) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");

    auto existing = UObject_StaticFindObject_hook::instance()->hook_.original()(T::StaticClass(), nullptr, pathname.c_str(), true);
    if (existing == nullptr) return nullptr;
    if (!existing->Name.IsValid()) return nullptr;

    return (T*)existing;
  };

  const auto existing_npc_tweak = check_valid.operator()<UDisTweaks_NPCPawn>(request.npc_tweaks_name);
  const auto existing_ai_tweak = check_valid.operator()<UDisTweaks_AIBrain>(request.ai_tweaks_name);
  const auto existing_faction_tweak = check_valid.operator()<UDisTweaks_Faction>(request.faction_tweak);

  if (!request.loaded_package && (!existing_npc_tweak || !existing_ai_tweak || !existing_faction_tweak)) {
    auto* heap_request = new NPCSpawnRequest(request);

    UObject_LoadPackageAsync_hook::instance()->hook_.original()(request.package_name.c_str(), [](UObject* thing, void* request) -> void {
      const auto casted_request = static_cast<NPCSpawnRequest *>(request);
      mods::handle_single_npc_request_stepped(casted_request);
    }, heap_request, new FGuid());

    return;
  }

  auto load_and_duplicate = [&]<typename T>(T* existing, const std::wstring& pathname) -> std::optional<T*> {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");

    if (!existing) {
      const auto loaded = engine::LoadObject<T>( nullptr, pathname.c_str(), nullptr, LOAD_SeekFree, nullptr);
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

  auto hit_location = mods::position_looking_at(world);

  const auto controller = reinterpret_cast<ADishonoredNPCController*>(UWorld_SpawnActor_hook::instance()->hook_.original()(world, ADishonoredNPCController::StaticClass(), 0, &hit_location, &player_controller->Pawn->Rotation, nullptr, 0, 1, nullptr, nullptr, 0, 1, nullptr));
  if (!controller) {
    LOG("Failed to spawn controller!");
    return;
  }

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(UDisTweaksBase_SpawnActor_hook::instance()->hook_.original()(npc_tweak.value(), EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, &hit_location, &player_controller->Pawn->Rotation, nullptr, 0, 1, controller, nullptr, 0, 1));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return;
  }

  actor->Role = ENetRole::ROLE_Authority;
  actor->m_NPCID = world_info->m_NextNPCID;
  world_info->m_NextNPCID++;

  controller->Possess(actor);
  ADishonoredNPCController_InitNPC_hook::instance()->hook_.original()(controller, npc_tweak.value()->m_pBrainTweak, EDisAISuspicionLevel::DAISL_Unsuspecting);
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
