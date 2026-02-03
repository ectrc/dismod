#include <vector>

#include "spawn.h"

#include "engine/engine.h"
#include "logger.h"

auto mods::handle_npc_requests(UWorld* world, std::vector<NPCSpawnRequest>& requests) -> std::vector<ADishonoredNPCController*> {
  std::vector<ADishonoredNPCController*> results = {};

  for (auto request : requests) {
    const auto result = ::mods::handle_single_npc_request(world, request);
    if (!result.has_value()) {
      LOG("NPC Request failed. npc_tweak={} ai_tweak={}", request.npc_tweaks_name.ToString(), request.ai_tweaks_name.ToString());
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

  const auto tweaks_base = engine::LoadObject<UDisTweaks_NPCPawn>(nullptr, request.npc_tweaks_name.ToWideString().c_str(), nullptr, engine::load_flags::memory_reader, nullptr);
  if (tweaks_base == nullptr) {
    LOG("Failed to load tweaks base!");
    return std::nullopt;
  }

  const auto ai_tweaks_base = engine::LoadObject<UDisTweaks_AIBrain>(nullptr, request.ai_tweaks_name.ToWideString().c_str(), nullptr, engine::load_flags::memory_reader, nullptr);
  if (ai_tweaks_base == nullptr) {
    LOG("Failed to load ai_tweaks_base!");
    return std::nullopt;
  }
  tweaks_base->m_pBrainTweak = ai_tweaks_base;

  const auto spawner = engine::ConstructObject<ADishonoredSpawner>(world);
  if (!spawner) {
    LOG("Failed to spawn spawner!");
    return std::nullopt;
  }

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

  const auto brain = reinterpret_cast<UDishonoredAIBrain *>(engine::StaticConstructObject(tweaks_base->m_pBrainTweak->m_pSpawnedObjectClass, controller, "AIBrain"));
  if (!brain) {
    LOG("Failed to spawn brain!");
    return std::nullopt;
  }

  brain->m_pBrainComponentContainer = engine::ConstructObject<UArkComponentContainer>(brain);
  actor->m_SpawnerInfo = FDisSpawnerInfo{};
  actor->m_SpawnerInfo.m_Position = {};
  actor->m_SpawnerInfo.m_Position.m_Loc = actor->Location;
  actor->m_SpawnerInfo.m_Position.m_Rot = actor->Rotation;

  actor->Controller = controller;
  actor->m_NPCID = world_info->m_NextNPCID;
  world_info->m_NextNPCID++;

  controller->Possess(actor);
  controller->m_pAIBrain = brain;

  init_brain_hook::instance()->hook_.original()(brain, actor, tweaks_base->m_pBrainTweak, EDisAISuspicionLevel::DAISL_Unsuspecting);
  register_avoidable_hook::instance()->hook_.original()(actor);

  return nullptr;
}

auto mods::spawn_test_pawn() -> void {
  while (GetAsyncKeyState(VK_INSERT) == 0) { Sleep(100); }

  get_state()->event_queue.push({
    .npc_tweaks_name = L"Pwn_CityGuard_MSmall_1_Helm1.Pwn_CityGuard_MSmall_1_Helm1",
    .ai_tweaks_name = L"AI_BrainTweaks_Guard.BrainTweaks_Guard",
  });
}