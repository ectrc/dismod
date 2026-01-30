#include "spawn.h"

#include "engine/engine.h"
#include "logger.h"
#include "hooks/dishonored/init_npc.h"

auto mods::spawn_test_pawn() -> void {
  const auto world = engine::FindObject<UWorld>();
  if (!world) {
    LOG("Failed to get WORLD!");
    return;
  }
  LOG("found world: {}", world->GetFullName());

  const auto tweaks_base = engine::LoadObject<UDisTweaks_NPCPawn>(nullptr, L"Pwn_CityGuard_MSmall_1_Helm1.Pwn_CityGuard_MSmall_1_Helm1", nullptr, engine::load_flags::memory_reader, nullptr);
  if (tweaks_base == nullptr) {
    LOG("Failed to load tweaks base!");
    return;
  }
  LOG("tweaks_base brain tweak {}", tweaks_base->m_pBrainTweak == nullptr ? "is null" : tweaks_base->m_pBrainTweak->GetFullName());

  const auto controller_calss = ADishonoredNPCController::StaticClass();
  LOG("controller_calss {}", controller_calss->GetFullName());

  const auto spawned_controller = reinterpret_cast<ADishonoredNPCController*>(engine::spawn_actor(world, controller_calss));
  const auto controller = reinterpret_cast<ADishonoredNPCController*>(spawned_controller);
  if (!controller) {
    LOG("Failed to spawn controller!");
    return;
  }
  LOG("spawned controller: {} {}", controller->Location.ToString(), controller->GetFullName());

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(tweaks_base, EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return;
  }
  controller->Pawn = actor;
  // init_npc_hook::instance()->hook_.original()(
  //   controller,
  //   tweaks_base->m_pBrainTweak,
  //   0
  // );


  const auto brain_spawned = reinterpret_cast<UDishonoredAIBrain *>(engine::StaticConstructObject(tweaks_base->m_pSpawnedObjectClass, controller, "AIBrain"));
  if (!brain_spawned) {
    LOG("Failed to brain_spawned!");
    return;
  }
  LOG("brain_spawned: {}", brain_spawned->GetFullName());
  controller->m_pAIBrain = brain_spawned;

  controller->Possess(actor);

  if (actor->Controller == nullptr) return LOG("actor controller is null :(");
  const auto brain = reinterpret_cast<ADishonoredNPCController*>(actor->Controller)->m_pAIBrain;
  if (brain) {
    LOG("Brain: {}", brain->GetFullName());
  }
}
