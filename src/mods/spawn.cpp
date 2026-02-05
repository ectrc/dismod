#include <vector>

#include "spawn.h"

#include "engine/engine.h"
#include "sdk.hpp"
#include "logger.h"

auto mods::handle_npc_requests(UWorld* world, std::vector<NPCSpawnRequest>& requests) -> std::vector<ADishonoredNPCController*> {
  std::vector<ADishonoredNPCController*> results = {};

  for (const auto& request : requests) {
    const auto result = ::mods::handle_single_npc_request(world, request);
    if (!result.has_value()) {
      LOG("NPC Request failed. npc_tweak={} ai_tweak={}", FString(request.npc_tweaks_name.c_str()).ToString().c_str(), FString(request.ai_tweaks_name.c_str()).ToString().c_str());
      continue;
    }

    results.push_back(result.value());
  }

  return results;
}

auto mods::handle_single_npc_request(UWorld* world, const NPCSpawnRequest& request) -> std::optional<ADishonoredNPCController*> {
  auto load_and_duplicate = [&request]<typename T>(std::wstring pathname) -> std::optional<T*> {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");

    const auto loaded = engine::LoadObject<T>( nullptr, pathname.c_str(), nullptr, engine::load_flags::seek_free, nullptr);
    if (loaded == nullptr) {
      LOG("Failed to load from disk!");
      return std::nullopt;
    }

    const auto duplicated = engine::DuplicateObject<T>(loaded, loaded, L"None");
    if (duplicated == nullptr) {
      LOG("Failed to duplicate from disk!");
      return std::nullopt;
    }

    return duplicated;
  };

  const auto world_info = engine::FindObject<ADishonoredGameInfo>();
  if (!world_info) {
    LOG("Failed to get world_info!");
    return std::nullopt;
  }

  const auto package = engine::LoadPackage(nullptr, L"L_Prison_Script", engine::load_flags::seek_free);

  const auto npc_tweak = load_and_duplicate.operator()<UDisTweaks_NPCPawn>(request.npc_tweaks_name);
  if (!npc_tweak.has_value()) {
    LOG("Failed to load npc_tweaks!");
    return std::nullopt;
  }

  const auto ai_tweak = load_and_duplicate.operator()<UDisTweaks_AIBrain>(request.ai_tweaks_name);
  if (!ai_tweak.has_value()) {
    LOG("Failed to load ai_tweak!");
    return std::nullopt;
  }
  npc_tweak.value()->m_pBrainTweak = ai_tweak.value();

  const auto faction_tweak = load_and_duplicate.operator()<UDisTweaks_Faction>(request.faction_tweak);
  if (!faction_tweak.has_value()) {
    LOG("Failed to load faction_tweak!");
    return std::nullopt;
  }
  npc_tweak.value()->m_pFactionTweak = faction_tweak.value();

  const auto spawn_location = FVector{ get_state()->pawn->Location.X, get_state()->pawn->Location.Y, get_state()->pawn->Location.Z + 200 };

  const auto controller = reinterpret_cast<ADishonoredNPCController*>(engine::spawn_actor(world, ADishonoredNPCController::StaticClass(), 0, &spawn_location));
  if (!controller) {
    LOG("Failed to spawn controller!");
    return std::nullopt;
  }

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(npc_tweak.value(), EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, &spawn_location, nullptr, nullptr, 0, 1, controller));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return std::nullopt;
  }

  actor->Role = ENetRole::ROLE_Authority;
  actor->m_NPCID = world_info->m_NextNPCID;
  world_info->m_NextNPCID++;
  controller->Possess(actor);
  controller_init_npc_hook::instance()->hook_.original()(controller, npc_tweak.value()->m_pBrainTweak, EDisAISuspicionLevel::DAISL_Unsuspecting);

  const auto action = engine::ConstructObject<UDisSeqAct_AIGoToActor>(world);
  action->m_pDestinationActor = get_state()->pawn;
  action->m_bSetNewHomeActor = true;
  action->m_DesiredMovementSpeed = EAIGoToActorMovement::AIGoToActorMovement_Run;
  controller->OnAIGoToActor(action);

  // const auto discover = engine::ConstructObject<UDisSeqAct_ShowLocationDiscovery>(world);
  // discover->m_LocationName = L"Hello :D";
  // reinterpret_cast<void(__thiscall*)(UDisSeqAct_ShowLocationDiscovery*)>(((void**)(discover->VfTableObject.Dummy))[0x5D])(discover);

  // const auto chop = engine::ConstructObject<UDisSeqAct_SeverLimb>(world);
  // action->m_pDestinationActor = get_state()->pawn;
  // action->m_bSetNewHomeActor = true;
  // action->m_DesiredMovementSpeed = EAIGoToActorMovement::AIGoToActorMovement_Run;
  // actor->OnSeverLimb(chop);

  return controller;
}

auto mods::spawn_test_pawn() -> void {
  // while (GetAsyncKeyState(VK_INSERT) == 0) { Sleep(100); }
  //
  // get_state()->event_queue.push({
  //   .npc_tweaks_name = L"Pwn_Thug_MSmall_4.Pwn_Thug_MSmall_4",
  //   .ai_tweaks_name = L"AI_BrainTweaks_Guard.BrainTweaks_Guard",
  // });
}