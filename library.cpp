#include "library.h"

#include "hooks/engine/process_event.h"
#include "hooks/engine/load_package.h"
#include "hooks/engine/load_package_async.h"
#include "hooks/engine/static_load_object.h"
#include "hooks/engine/static_find_object.h"
#include "hooks/engine/static_duplicate_object.h"
#include "hooks/engine/static_construct_object.h"
#include "hooks/engine/spawn_actor_from_tweaks.h"
#include "hooks/dishonored/world.h"

#include "engine/state.h"
#include "hooks/steam.h"
#include "hooks/dishonored/locomotion.h"
#include "hooks/dishonored/npc.h"
#include "hooks/dishonored/save.h"
#include "hooks/render/end_scene.h"

#include "render/render.h"

auto __stdcall thread(void* module) -> void {
  CLEAR_CONSOLE();
  LOG("Welcome!");

  UOnlineSubsystemSteamworks_IsEnabled_hook::instance()->hook_.enable();
  UOnlineSubsystemSteamworks_WriteFileToRemoteStorage_hook::instance()->hook_.enable();
  UOnlineSubsystemSteamworks_WriteProfileSettings_hook::instance()->hook_.enable();
  UOnlineProfileSettings_SetToDefaults_hook::instance()->hook_.enable();
  UOnlineSubsystemSteamworks_ReadProfileSettings_hook::instance()->hook_.enable();
  UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_hook::instance()->hook_.enable();

  FDisAsyncSaveGameDeleter_DoWork_hook::instance()->hook_.enable();
  FDisAsyncSaveGameLister_DoWork_hook::instance()->hook_.enable();
  FDisAsyncSaveGameSaver_DoWork_hook::instance()->hook_.enable();
  get_base_filename_hook::instance()->hook_.enable();
  // allocate_Bytes_maybe_hook::instance()->hook_.enable();

  // Sleep(6000);

  // const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
  // gobjects = reinterpret_cast<TArray<UObject*>*>(base + 0x1023630);
  // gnames = reinterpret_cast<TArray<FNameEntry*>*>(base + 0x1035674);
  //
  // const auto state = get_state();
  // state->engine = *reinterpret_cast<UDishonoredEngine **>(base + 0x104721C);
  // state->pawn = *reinterpret_cast<ADishonoredPlayerPawn**>(base + 0x105F628);
  // state->controller = reinterpret_cast<ADishonoredPlayerController*>(state->pawn->Controller);
  // state->use_seek_free_loading = reinterpret_cast<bool*>(base + 0x101B24C);

  // *state->use_seek_free_loading = false;
  // LOG("use seek free {}", *state->use_seek_free_loading ? "yes" : "no");

  // TODO: make helper functions per category
  {
    // engine hooks
    // UObject_ProcessEvent_hook::instance()->hook_.enable();
    // UObject_LoadPackage_hook::instance()->hook_.enable();
    // UObject_LoadPackageAsync_hook::instance()->hook_.enable();
    // UObject_StaticLoadObject_hook::instance()->hook_.enable();
    // UObject_StaticConstructObject_hook::instance()->hook_.enable();
    // UObject_StaticDuplicateObject_hook::instance()->hook_.enable();
    // UObject_StaticFindObject_hook::instance()->hook_.enable();
    // UDisTweaksBase_SpawnActor_hook::instance()->hook_.enable();

    // // locomotion hooks
    // FArkComponentLocomotion_SendTouchAndBumpEvents_hook::instance()->hook_.enable();
    // FArkComponentLocomotion_MovePawn_hook::instance()->hook_.enable();
    // FArkComponentLookAt_StartLookAtLocation_hook::instance()->hook_.enable();
    // FArkComponentLookAt_StartLookAtActor_hook::instance()->hook_.enable();
    // FDisNPCRotationIntent_SetTargetRotation_hook::instance()->hook_.enable();
    //
    // // world hooks
    // UWorld_SpawnActor_hook::instance()->hook_.enable();
    // UWorld_Tick_hook::instance()->hook_.enable();
    // UWorld_SingleLineCheck_hook::instance()->hook_.enable();
    // FRotator_Vector_hook::instance()->hook_.enable();
    // APlayerController_GetPlayerViewPoint_hook::instance()->hook_.enable();
    //
    // // saving hooks
    // FName_ToString_hook::instance()->hook_.enable();
    // UDishonoredEngine_DisSave_hook::instance()->hook_.enable();
    //
    // // npc hooks
    // UDishonoredAIBrain_InitBrain_hook::instance()->hook_.enable();
    // UDishonoredAIBrain_TickBrain_hook::instance()->hook_.enable();
    // ADishonoredNPCController_InitNPC_hook::instance()->hook_.enable();
    //
    // // render hooks
    // end_scene_hook::instance()->hook_.enable();
    // process_input_hook::instance()->hook_.enable();
  }

  // while (!render::render_state.wants_exit.load()) { Sleep(1000); }
  // FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
}


void __stdcall unload(void* module) {
  Sleep(2000);

  // UObject_ProcessEvent_hook::instance()->hook_.disable();
  // UObject_LoadPackage_hook::instance()->hook_.disable();
  // UObject_LoadPackageAsync_hook::instance()->hook_.disable();
  // UObject_StaticLoadObject_hook::instance()->hook_.disable();
  // UObject_StaticConstructObject_hook::instance()->hook_.disable();
  // UObject_StaticDuplicateObject_hook::instance()->hook_.disable();
  // UObject_StaticFindObject_hook::instance()->hook_.disable();
  // UDisTweaksBase_SpawnActor_hook::instance()->hook_.disable();
  //
  // FArkComponentLocomotion_SendTouchAndBumpEvents_hook::instance()->hook_.disable();
  // FArkComponentLocomotion_MovePawn_hook::instance()->hook_.disable();
  // FArkComponentLookAt_StartLookAtLocation_hook::instance()->hook_.disable();
  // FArkComponentLookAt_StartLookAtActor_hook::instance()->hook_.disable();
  // FDisNPCRotationIntent_SetTargetRotation_hook::instance()->hook_.enable();
  //
  // UWorld_SpawnActor_hook::instance()->hook_.disable();
  // UWorld_Tick_hook::instance()->hook_.disable();
  // UWorld_SingleLineCheck_hook::instance()->hook_.disable();
  // FRotator_Vector_hook::instance()->hook_.disable();
  // APlayerController_GetPlayerViewPoint_hook::instance()->hook_.disable();
  //
  // FName_ToString_hook::instance()->hook_.disable();
  // UDishonoredEngine_DisSave_hook::instance()->hook_.disable();
  //
  // UDishonoredAIBrain_InitBrain_hook::instance()->hook_.disable();
  // UDishonoredAIBrain_TickBrain_hook::instance()->hook_.disable();
  // ADishonoredNPCController_InitNPC_hook::instance()->hook_.disable();
  //
  // end_scene_hook::instance()->hook_.disable();
  // process_input_hook::instance()->hook_.disable();

  // render::cleanup();
  LOG("Unloaded!");
}

[[maybe_unused]] auto __stdcall DllMain(void* module, const unsigned long reason, void*) -> bool {
  if (reason == DLL_PROCESS_ATTACH) CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), module, 0, nullptr);
  else if (reason == DLL_PROCESS_DETACH) unload(module);
  return true;
}

extern "C"
__declspec(dllexport)
HRESULT WINAPI DirectInput8Create(
    HINSTANCE hinst,
    DWORD dwVersion,
    REFIID riidltf,
    LPVOID* ppvOut,
    LPUNKNOWN punkOuter
) {
  static HMODULE s_dinput8_module = nullptr;
  if (!s_dinput8_module) {
    wchar_t system_dir[MAX_PATH] = {};
    if (GetSystemDirectoryW(system_dir, MAX_PATH) == 0) {
      return E_FAIL;
    }
    std::wstring real_dinput8_path = std::wstring(system_dir) + L"\\dinput8.dll";
    s_dinput8_module = LoadLibraryW(real_dinput8_path.c_str());
    if (!s_dinput8_module) return E_FAIL;
  }

  using DirectInput8CreateFuncPtr = HRESULT(WINAPI*)(HINSTANCE, DWORD, REFIID, LPVOID*, LPUNKNOWN);

  auto dinput8_create = reinterpret_cast<DirectInput8CreateFuncPtr>(GetProcAddress(s_dinput8_module, "DirectInput8Create"));
  if (!dinput8_create) return E_FAIL;

  return dinput8_create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
}