#include "library.h"

#include "hooks/process_event.h"
#include "hooks/load_package.h"
#include "hooks/load_package_async.h"

auto __stdcall thread(void* module) -> void {
  CLEAR_CONSOLE();
  LOG("Welcome!");

  const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
  GObjects = reinterpret_cast<TArray<UObject*>*>(base + 0x1023630);
  GNames = reinterpret_cast<TArray<FNameEntry*>*>(base + 0x1035674);

  { 
    process_event_hook::instance()->hook_.enable(); 
    load_package_hook::instance()->hook_.enable();
    load_package_async_hook::instance()->hook_.enable();

    while (GetAsyncKeyState(VK_END) == 0) { Sleep(100); }
  }
    
  LOG("Exiting...");
  FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
}

[[maybe_unused]] auto __stdcall DllMain(void* module, const unsigned long reason, void*) -> bool {
  if (reason != DLL_PROCESS_ATTACH) return false;
  CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), module, 0, nullptr);
  return true;
}