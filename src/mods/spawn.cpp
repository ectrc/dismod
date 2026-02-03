#include <initializer_list>

#include "spawn.h"

#include "engine/engine.h"
#include "logger.h"

auto mods::spawn_test_pawn() -> void {
  while (GetAsyncKeyState(VK_INSERT) == 0) { Sleep(100); }

  const auto world = engine::FindObject<UWorld>();
  if (!world) {
    LOG("Failed to get WORLD!");
    return;
  }
  const auto world_info = engine::FindObject<ADishonoredGameInfo>();
  if (!world_info) {
    LOG("Failed to get world_info!");
    return;
  }
  LOG("found world_info: {}", world_info->GetFullName());

  const auto tweaks_base = engine::LoadObject<UDisTweaks_NPCPawn>(nullptr, L"Pwn_CityGuard_MSmall_1_Helm1.Pwn_CityGuard_MSmall_1_Helm1", nullptr, engine::load_flags::memory_reader, nullptr);
  if (tweaks_base == nullptr) {
    LOG("Failed to load tweaks base!");
    return;
  }
  LOG("tweaks_base brain tweak {}", tweaks_base->m_pBrainTweak == nullptr ? "is null" : tweaks_base->m_pBrainTweak->GetFullName());

  const auto ai_tweaks_base = engine::LoadObject<UDisTweaks_AIBrain>(nullptr, L"AI_BrainTweaks_Guard.BrainTweaks_Guard", nullptr, engine::load_flags::memory_reader, nullptr);
  if (ai_tweaks_base == nullptr) {
    LOG("Failed to load ai_tweaks_base!");
    return;
  }
  LOG("ai_tweaks_base brain tweak {}", ai_tweaks_base == nullptr ? "is null" : ai_tweaks_base->GetFullName());
  tweaks_base->m_pBrainTweak = ai_tweaks_base;

  const auto controller = reinterpret_cast<ADishonoredNPCController*>(engine::spawn_actor(world, ADishonoredNPCController::StaticClass()));
  if (!controller) {
    LOG("Failed to spawn controller!");
    return;
  }
  LOG("spawned controller: {} {}", controller->Location.ToString(), controller->GetFullName());

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(tweaks_base, EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, nullptr, nullptr, nullptr, 0, 1, controller));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return;
  }

  const auto brain_spawned = reinterpret_cast<UDishonoredAIBrain *>(engine::StaticConstructObject(ai_tweaks_base->m_pSpawnedObjectClass, controller, "AIBrain"));
  if (!brain_spawned) {
    LOG("Failed to brain_spawned!");
    return;
  }
  LOG("brain_spawned: {}", brain_spawned->GetFullName());
  const auto ark_container = reinterpret_cast<UArkComponentContainer *>(engine::StaticConstructObject(UArkComponentContainer::StaticClass(), brain_spawned));
  if (!ark_container) {
    LOG("Failed to ark_container!");
    return;
  }
  brain_spawned->m_pBrainComponentContainer = ark_container;

  actor->m_SpawnerInfo = FDisSpawnerInfo{};
  actor->m_SpawnerInfo.m_Position = {};
  actor->m_SpawnerInfo.m_Position.m_Loc = actor->Location;
  actor->m_SpawnerInfo.m_Position.m_Rot = actor->Rotation;

  actor->Controller = controller;
  actor->m_NPCID = world_info->m_NextNPCID;
  world_info->m_NextNPCID++;

  controller->Possess(actor);
  controller->m_pAIBrain = brain_spawned;

  init_brain_hook::instance()->hook_.original()(brain_spawned, actor, ai_tweaks_base, EDisAISuspicionLevel::DAISL_Unsuspecting);

  Sleep(1000);
}