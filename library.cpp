#include "library.h"

#include "hooks/process_event.h"
#include "hooks/load_package.h"
#include "hooks/load_package_async.h"
#include "hooks/static_load_object.h"
#include "hooks/static_construct_object.h"

#include "engine/engine.h"

auto __stdcall thread(void* module) -> void {
  CLEAR_CONSOLE();
  LOG("Welcome!");

  const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
  GObjects = reinterpret_cast<TArray<UObject*>*>(base + 0x1023630);
  GNames = reinterpret_cast<TArray<FNameEntry*>*>(base + 0x1035674);

  // todo: find a better way to get the player pawn than using a raw offset
  const auto player = *reinterpret_cast<ADishonoredPlayerPawn**>(base + 0x105F628);
  const auto controller = reinterpret_cast<ADishonoredPlayerController*>(player->Controller);

  { 
    process_event_hook::instance()->hook_.enable();
    load_package_hook::instance()->hook_.enable();
    load_package_async_hook::instance()->hook_.enable();
    static_load_object_hook::instance()->hook_.enable();
    static_construct_object_hook::instance()->hook_.enable();

    // UDishonoredEngine* a;
    // a->GetCurrentWorldInfo()->StreamingLevels.at(0);

    const auto game_engine = engine::FindObject<UDishonoredEngine>();
    if (!game_engine) {
      LOG("Failed to find UDishonoredEngine");
      FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
    }

    const auto pawn = engine::ConstructObject<ADishonoredNPCPawn>(game_engine->GetCurrentWorldInfo()->StreamingLevels.at(0));
    pawn->m_pNPCMasterFSM = engine::ConstructObject<UDishonoredNativeStateMachine>(pawn);
    pawn->m_pNPCMasterFSM->m_pCurrentState = engine::ConstructObject<UStateNPCMasterWalk>(pawn->m_pNPCMasterFSM);
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(pawn->m_pNPCMasterFSM->m_pCurrentState);
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterFalling>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterFallingUncontrolled>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterAction>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterActionMelee>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterActionMeleeSwarm>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterActionImmolate>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterActionMeleeVersus>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterDead_Limp>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterDead_Electrocuted>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterDead_BeingCarried>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterBePossessed>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterActionPostPossessed>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterProjectileHitReact>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterStrongHitReact>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterDodge>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterStunned>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterAim>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterAim_Grenade>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterDistracted>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterGesture>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterThrown>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterBeingAssassinated>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCActionParry>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterPlayAnim>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCUpperPlayAnim>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterDualPlayAnim>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterRangedAttack>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterEquip>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterLyingInWait>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterSurprised>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterMinigame>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMasterBeingChoked>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCMusicBox>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCEscapeExplosion>(pawn->m_pNPCMasterFSM));
    pawn->m_pNPCMasterFSM->m_NativeStates.push_back(engine::ConstructObject<UStateNPCAttractSpell>(pawn->m_pNPCMasterFSM));

    // pawn->m_pInventory = engine::ConstructObject<UDishonoredInventory>(pawn);
    // pawn->m_pAvoidable = engine::ConstructObject<UArkAvoidable>(pawn);

    // pawn->Mesh = engine::ConstructObject<UDisSkeletalMeshComponent>(pawn);
    // pawn->m_pHeadMesh = engine::ConstructObject<UDisSkeletalMeshComponent>(pawn);

    // pawn->m_pLightEnvironment = engine::ConstructObject<UDynamicLightEnvironmentComponent>(pawn);
    // pawn->m_pConvComponent = engine::ConstructObject<UDisConversationComponent>(pawn);
    // pawn->m_VisionConeParticleEffect = engine::ConstructObject<UParticleSystemComponent>(pawn);
    // pawn->m_MiscParticleEffect = engine::ConstructObject<UParticleSystemComponent>(pawn);
    // pawn->m_pAttnTargetComponent = engine::ConstructObject<UDisAttentionTargetComponent>(pawn);
    // pawn->m_pStealthLightingDLE = engine::ConstructObject<UDynamicLightEnvironmentComponent>(pawn);
    
    while (GetAsyncKeyState(VK_INSERT) == 0) { Sleep(100); }
  }

  FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
}

void __stdcall unload(void* module) {
  process_event_hook::instance()->hook_.disable();
  load_package_hook::instance()->hook_.disable();
  load_package_async_hook::instance()->hook_.disable();
  static_load_object_hook::instance()->hook_.disable();
  static_construct_object_hook::instance()->hook_.disable();
  LOG("Unloaded!");
}

[[maybe_unused]] auto __stdcall DllMain(void* module, const unsigned long reason, void*) -> bool {
  if (reason == DLL_PROCESS_ATTACH) CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), module, 0, nullptr);
  else if (reason == DLL_PROCESS_DETACH) unload(module);
  return true;
}