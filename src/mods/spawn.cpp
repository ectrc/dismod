#include "spawn.h"

#include "engine/engine.h"
#include "logger.h"

auto mods::spawn_test_pawn() -> void {
  const auto tweaks_base = engine::LoadObject<UDisTweaks_NPCPawn>(nullptr, L"Pwn_CityGuard_MSmall_1_Helm1.Pwn_CityGuard_MSmall_1_Helm1", nullptr, engine::load_flags::none, nullptr);
  if (tweaks_base == nullptr) {
    LOG("Failed to load tweaks base!");
    return;
  }

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::SpawnActor(tweaks_base, EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return;
  }

  LOG("Successfully spawned actor: {} {}", actor->Location.ToString(), actor->GetFullName());

  const auto brain = reinterpret_cast<ADishonoredNPCController*>(actor->Controller)->m_pAIBrain;
  if (brain) {
    LOG("Brain: {}", brain->GetFullName());
  }
}