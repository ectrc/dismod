#include "library.h"

#include "hooks/process_event.h"

auto __stdcall thread(void* module) -> void {
  LOG("Welcome!");

  const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
  GObjects = reinterpret_cast<TArray<UObject*>*>(base + 0x1023630);
  GNames = reinterpret_cast<TArray<FNameEntry*>*>(base + 0x1035674);

  {
    const auto pe = process_event_hook::instance(); 
    pe->hook_.enable(); 
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