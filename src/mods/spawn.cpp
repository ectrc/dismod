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

  const auto tweaks_base = engine::LoadObject<UDisTweaks_NPCPawn>(nullptr, request.npc_tweaks_name.c_str(), nullptr, engine::load_flags::memory_reader, nullptr);
  if (tweaks_base == nullptr) {
    LOG("Failed to load tweaks base!");
    return std::nullopt;
  }
  tweaks_base->m_BusyText = L"username123";
  tweaks_base->m_pInteractableTweaks->m_bAllowedToHighlight = true;

  const auto ai_tweaks_base = engine::LoadObject<UDisTweaks_AIBrain>(nullptr, request.ai_tweaks_name.c_str(), nullptr, engine::load_flags::memory_reader, nullptr);
  if (ai_tweaks_base == nullptr) {
    LOG("Failed to load ai_tweaks_base!");
    return std::nullopt;
  }
  tweaks_base->m_pBrainTweak = ai_tweaks_base;

  const auto faction_tweak = engine::LoadObject<UDisTweaks_Faction>(nullptr, request.faction_tweak.c_str(), nullptr, engine::load_flags::memory_reader, nullptr);
  if (faction_tweak == nullptr) {
    LOG("Failed to load faction_tweak!");
    return std::nullopt;
  }
  tweaks_base->m_pFactionTweak = faction_tweak;

  const auto controller = reinterpret_cast<ADishonoredNPCController*>(engine::spawn_actor(world, ADishonoredNPCController::StaticClass()));
  if (!controller) {
    LOG("Failed to spawn controller!");
    return std::nullopt;
  }

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(tweaks_base, EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, nullptr, nullptr, nullptr, 0, 1, controller));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return std::nullopt;
  }

  actor->Role = ENetRole::ROLE_Authority;

  actor->m_SpawnerInfo = FDisSpawnerInfo{};
  actor->m_SpawnerInfo.m_Position = {};
  actor->m_SpawnerInfo.m_Position.m_Loc = {0, 1, 0};
  actor->m_SpawnerInfo.m_Position.m_Rot = actor->Rotation;

  actor->Controller = controller;
  actor->m_NPCID = world_info->m_NextNPCID;

  world_info->m_NextNPCID++;

  controller->Possess(actor);
  controller_init_npc_hook::instance()->hook_.original()(controller, tweaks_base->m_pBrainTweak, EDisAISuspicionLevel::DAISL_Unsuspecting);

  // const auto discover = engine::ConstructObject<UDisSeqAct_ShowLocationDiscovery>(world);
  // discover->m_LocationName = L"Hello :D";
  // reinterpret_cast<void(__thiscall*)(UDisSeqAct_ShowLocationDiscovery*)>(((void**)(discover->VfTableObject.Dummy))[0x5D])(discover);

  const auto action = engine::ConstructObject<UDisSeqAct_AIGoToActor>(world);
  action->m_pDestinationActor = get_state()->pawn;
  action->m_bSetNewHomeActor = true;
  action->m_DesiredMovementSpeed = EAIGoToActorMovement::AIGoToActorMovement_Run;
  controller->OnAIGoToActor(action);

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