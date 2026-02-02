#include "spawn.h"

#include "engine/engine.h"
#include "logger.h"
#include "dishonored.h"

#include "hooks/dishonored/components/ai_monitor.h"
#include "hooks/dishonored/components/ai_knowledge.h"

#include "hooks/dishonored/add_new_component.h"
#include "hooks/dishonored/get_global_ai_brain_manager.h"
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

  const auto brain_spawned = reinterpret_cast<UDishonoredAIBrain *>(engine::StaticConstructObject(tweaks_base->m_pSpawnedObjectClass, controller, "AIBrain"));
  if (!brain_spawned) {
    LOG("Failed to brain_spawned!");
    return;
  }
  LOG("brain_spawned: {}", brain_spawned->GetFullName());

  controller->m_pAIBrain = brain_spawned;

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(tweaks_base, EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, nullptr, nullptr, nullptr, 0, 1, controller));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return;
  }
  controller->Possess(actor);

  brain_spawned->m_pOwningController = controller;
  brain_spawned->m_pOwningPawn = actor;
  brain_spawned->m_Home = { .m_Loc = controller->Location, .m_Rot = controller->Rotation };
  brain_spawned->m_BrainFlags[1] = 1;
  brain_spawned->m_pBrainComponentContainer->Owner = controller;
  brain_spawned->m_PendingSuspicionLevel = EDisAISuspicionLevel::DAISL_Unsuspecting;
  brain_spawned->m_SuspicionLevel = EDisAISuspicionLevel::DAISL_Unsuspecting;

  brain_spawned->m_pGlobalAIManager = get_global_ai_brain_manager_hook::instance()->hook_.original()();
  if (brain_spawned->m_pGlobalAIManager->m_pBrainList) brain_spawned->m_pGlobalAI_NextBrain = brain_spawned->m_pGlobalAIManager->m_pBrainList;
  brain_spawned->m_pGlobalAIManager->m_pBrainList = brain_spawned;

  brain_spawned->m_pStimManager = brain_spawned->m_pGlobalAIManager->m_pStimManager;
  brain_spawned->m_LookAtRequest = { };

  FDisAIMonitorReaction monitor_reaction_component = {};
  add_new_component_hook::instance()->hook_.original()(brain_spawned->m_pBrainComponentContainer, &monitor_reaction_component);
  ai_monitor_init_hook::instance()->hook_.original()(&monitor_reaction_component);

  add_ai_knowledge_to_component_manager_hook::instance()->hook_.original()(brain_spawned->m_pBrainComponentContainer);

  // monitor_reaction_component->

   // m;
  // add_new_component_hook::instance()->hook_.original()();

  // init_npc_hook::instance()->hook_.original()(
  //   controller,
  //   tweaks_base->m_pBrainTweak,
  //   0
  // );

  if (actor->Controller == nullptr) return LOG("actor controller is null :(");
  const auto brain = reinterpret_cast<ADishonoredNPCController*>(actor->Controller)->m_pAIBrain;
  if (brain) {
    LOG("Brain: {}", brain->GetFullName());
  }
}
