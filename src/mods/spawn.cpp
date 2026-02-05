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
  const auto world_info = engine::FindObject<ADishonoredGameInfo>();
  if (!world_info) {
    LOG("Failed to get world_info!");
    return std::nullopt;
  }

  const auto package = engine::LoadPackage(nullptr, L"L_Prison_Script", engine::load_flags::seek_free);
  LOG("package {}", (void*)package);

  const auto loaded_tweaks_base = engine::LoadObject<UDisTweaks_NPCPawn>(nullptr, request.npc_tweaks_name.c_str(), nullptr, engine::load_flags::seek_free, nullptr);
  if (loaded_tweaks_base == nullptr) {
    LOG("Failed to load tweaks base!");
    return std::nullopt;
  }

  const auto loaded_ai_tweaks_base = engine::LoadObject<UDisTweaks_AIBrain>(nullptr, request.ai_tweaks_name.c_str(), nullptr, engine::load_flags::seek_free, nullptr);
  if (loaded_ai_tweaks_base == nullptr) {
    LOG("Failed to load ai_tweaks_base!");
    return std::nullopt;
  }
  loaded_tweaks_base->m_pBrainTweak = loaded_ai_tweaks_base;

  const auto loaded_faction_tweak = engine::LoadObject<UDisTweaks_Faction>(nullptr, request.faction_tweak.c_str(), nullptr, engine::load_flags::seek_free, nullptr);
  if (loaded_faction_tweak == nullptr) {
    LOG("Failed to load faction_tweak!");
    return std::nullopt;
  }
  loaded_tweaks_base->m_pFactionTweak = loaded_faction_tweak;

  const auto spawn_location = FVector{ get_state()->pawn->Location.X, get_state()->pawn->Location.Y, get_state()->pawn->Location.Z + 200 };

  const auto controller = reinterpret_cast<ADishonoredNPCController*>(engine::spawn_actor(world, ADishonoredNPCController::StaticClass(), 0, &spawn_location));
  if (!controller) {
    LOG("Failed to spawn controller!");
    return std::nullopt;
  }

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(loaded_tweaks_base, EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, &spawn_location, nullptr, nullptr, 0, 1, controller));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return std::nullopt;
  }

  actor->Role = ENetRole::ROLE_Authority;
  actor->m_NPCID = world_info->m_NextNPCID;
  world_info->m_NextNPCID++;
  controller->Possess(actor);
  controller_init_npc_hook::instance()->hook_.original()(controller, loaded_tweaks_base->m_pBrainTweak, EDisAISuspicionLevel::DAISL_Unsuspecting);

  // const auto discover = engine::ConstructObject<UDisSeqAct_ShowLocationDiscovery>(world);
  // discover->m_LocationName = L"Hello :D";
  // reinterpret_cast<void(__thiscall*)(UDisSeqAct_ShowLocationDiscovery*)>(((void**)(discover->VfTableObject.Dummy))[0x5D])(discover);

  const auto action = engine::ConstructObject<UDisSeqAct_AIGoToActor>(world);
  action->m_pDestinationActor = get_state()->pawn;
  action->m_bSetNewHomeActor = true;
  action->m_DesiredMovementSpeed = EAIGoToActorMovement::AIGoToActorMovement_Run;
  controller->OnAIGoToActor(action);

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