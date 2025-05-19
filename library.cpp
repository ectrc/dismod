#include "library.h"

auto __stdcall thread(void* module) -> void {
  LOG("Welcome!");

  FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
}

[[maybe_unused]] auto __stdcall DllMain(void* module, const unsigned long reason, void*) -> bool {
  if (reason != DLL_PROCESS_ATTACH) return false;
  CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), module, 0, nullptr);
  return true;
}