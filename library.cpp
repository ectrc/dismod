#include "library.h"

#include "hooks/process_event.h"
#include "hooks/load_package.h"
#include "hooks/load_package_async.h"
#include "hooks/static_load_object.h"
#include "hooks/post_render.h"

auto __stdcall thread(void* module) -> void {
  CLEAR_CONSOLE();
  LOG("Welcome!");

  const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
  GObjects = reinterpret_cast<TArray<UObject*>*>(base + 0x1023630);
  GNames = reinterpret_cast<TArray<FNameEntry*>*>(base + 0x1035674);

  // todo: find a better way to get the player pawn than using a raw offset
  const auto player = *reinterpret_cast<ADishonoredPlayerPawn**>(base + 0x105F628);

  { 
    process_event_hook::instance()->hook_.enable();
    load_package_hook::instance()->hook_.enable();
    load_package_async_hook::instance()->hook_.enable();
    static_load_object_hook::instance()->hook_.enable();
    post_render_hook::instance()->hook_.enable();

    while (GetAsyncKeyState(VK_INSERT) == 0) { Sleep(1000); }
  }

  FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
}

void __stdcall unload(void* module) {
  process_event_hook::instance()->hook_.disable();
  load_package_hook::instance()->hook_.disable();
  load_package_async_hook::instance()->hook_.disable();
  static_load_object_hook::instance()->hook_.disable();
  post_render_hook::instance()->hook_.disable();
  LOG("Unloaded!");
}

[[maybe_unused]] auto __stdcall DllMain(void* module, const unsigned long reason, void*) -> bool {
  if (reason == DLL_PROCESS_ATTACH) CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), module, 0, nullptr);
  else if (reason == DLL_PROCESS_DETACH) unload(module);
  return true;
}