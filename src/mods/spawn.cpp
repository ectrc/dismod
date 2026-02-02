#include "spawn.h"

#include "engine/engine.h"
#include "logger.h"
#include "dishonored.h"

#include "hooks/dishonored/components/ai_monitor.h"
#include "hooks/dishonored/components/ai_knowledge.h"
#include "hooks/dishonored/init_npc.h"
#include "hooks/dishonored/tick_brain.h"
#include "hooks/dishonored/components/init_sterring.h"
#include "hooks/dishonored/components/look_at.h"

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

  const auto ark_container = reinterpret_cast<UArkComponentContainer *>(engine::StaticConstructObject(UArkComponentContainer::StaticClass(), brain_spawned));
  if (!ark_container) {
    LOG("Failed to ark_container!");
    return;
  }
  LOG("ark_container: {}", ark_container->GetFullName());

  brain_spawned->m_pBrainComponentContainer = ark_container;
  controller->m_pAIBrain = brain_spawned;

  const auto actor = reinterpret_cast<ADishonoredNPCPawn*>(engine::spawn_actor_by_tweaks(tweaks_base, EeDisTweaksSpawnType::eDisTweaksSpawnType_InGame, 0, nullptr, nullptr, nullptr, 0, 1, controller));
  if (actor == nullptr) {
    LOG("Failed to spawn actor!");
    return;
  }

  controller->Possess(actor);
  LOG("possessed actor: {}", actor->GetFullName());
  Sleep(200);
  LOG("brain initialised: {}", actor->GetFullName());

  brain_spawned->m_pOwningController = controller;
  brain_spawned->m_pOwningPawn = actor;
  brain_spawned->m_Home = { .m_Loc = controller->Location, .m_Rot = controller->Rotation };
  brain_spawned->m_BrainFlags[1] = 1;
  brain_spawned->m_pBrainComponentContainer->Owner = controller;
  brain_spawned->m_PendingSuspicionLevel = EDisAISuspicionLevel::DAISL_Unsuspecting;
  brain_spawned->m_SuspicionLevel = EDisAISuspicionLevel::DAISL_Unsuspecting;

  brain_spawned->m_pGlobalAIManager = world_info->m_pGlobalAIManager;
  if (brain_spawned->m_pGlobalAIManager->m_pBrainList) brain_spawned->m_pGlobalAI_NextBrain = brain_spawned->m_pGlobalAIManager->m_pBrainList;
  brain_spawned->m_pGlobalAIManager->m_pBrainList = brain_spawned;
  brain_spawned->m_pStimManager = brain_spawned->m_pGlobalAIManager->m_pStimManager;
  brain_spawned->m_LookAtRequest = { };

  FDisAIMonitorReaction monitor_reaction_component = {};
  monitor_reaction_component.m_pOwningBrain = brain_spawned;
  monitor_reaction_component.m_pOwner = (uintptr_t)controller;
  brain_spawned->m_pBrainComponentContainer->m_Components.push_back(FPointer{reinterpret_cast<uintptr_t>(&monitor_reaction_component)});
  add_ai_knowledge_to_component_manager_hook::instance()->hook_.original()(brain_spawned->m_pBrainComponentContainer);

  brain_spawned->m_pCurrentBehavior = nullptr;
  brain_spawned->m_BehaviorArray.clear();

  {
    const auto behave_tweak = (UDisTweaks_AIBehavior_Search*)get_default_object_hook::instance()->hook_.original()(UDisTweaks_AIBehavior_Search::StaticClass(), false);
    if (!behave_tweak) {
      LOG("Failed to behave_tweak!");
      return;
    }
    LOG("behave_tweak: {}", behave_tweak->GetFullName());

    const auto behave_obj = reinterpret_cast<UDishonoredAIBehavior*>(engine::StaticConstructObject(UDishonoredAIBehavior::StaticClass(), brain_spawned));
    if (!behave_obj) {
      LOG("Failed to behave!");
      return;
    }
    LOG("behave: {}", behave_obj->GetFullName());

    behave_obj->m_pOwningBrain = brain_spawned;
    behave_obj->m_pBehaviorTweaks = behave_tweak;
    behave_obj->m_pGlobalAIMan = brain_spawned->m_pGlobalAIManager;


    brain_spawned->m_BehaviorArray.push_back(behave_obj);
  }

  const auto ai_brain_tweaks = (UDisTweaks_AIBrain*)get_default_object_hook::instance()->hook_.original()(UDisTweaks_AIBrain::StaticClass(), false);
  if (!ai_brain_tweaks) {
    LOG("Failed to ai_brain_tweaks!");
    return;
  }
  tweaks_base->m_pBrainTweak = ai_brain_tweaks;
  LOG("ai_brain_tweaks: {}, length of its behaviours: {}", ai_brain_tweaks->GetFullName(), ai_brain_tweaks->m_BehaviorTweak.size());

  FAIStimStruct_BrainInit ai_brain_stim = { };
  ai_brain_stim.m_StimID = 11;
  ai_brain_stim.m_pStimManager = brain_spawned->m_pStimManager;
  ai_brain_stim.m_pSource = brain_spawned;
  ai_brain_stim.m_VTable_Pointer_Dummy.Dummy = 0xD33938;
  init_stim_hook::instance()->hook_.original()(&ai_brain_stim);

  FDisStimRef ref = {};
  ref.m_pStim = FPointer{(uintptr_t)&ai_brain_stim};
  ref.m_fDelayTimer = 1.0f;
  ai_brain_stim.m_RefCount++;
  brain_spawned->m_StimQueue.push_back(ref);

  tick_brain_hook::instance()->hook_.original()(brain_spawned, 0.0f);

  if (actor->Controller == nullptr) return LOG("actor controller is null :(");
  const auto brain = reinterpret_cast<ADishonoredNPCController*>(actor->Controller)->m_pAIBrain;
  if (!brain) {
    LOG("BRAIN IS NOT INITALISED!!!");
    return;
  }
  LOG("Brain: {}", brain->GetFullName());

  // brain->m_bBrainIsInitialized = true;
}