#include "library.h"

#include "hooks/process_event.h"
#include "hooks/load_package.h"
#include "hooks/load_package_async.h"
#include "hooks/static_load_object.h"

auto __stdcall thread(void* module) -> void {
  CLEAR_CONSOLE();
  LOG("Welcome!");

  const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
  GObjects = reinterpret_cast<TArray<UObject*>*>(base + 0x1023630);
  GNames = reinterpret_cast<TArray<FNameEntry*>*>(base + 0x1035674);

  const auto DishonoredPlayerPawn = *reinterpret_cast<ADishonoredPlayerPawn**>(base + 0x105F628);

  { 
    process_event_hook::instance()->hook_.enable(); 
    load_package_hook::instance()->hook_.enable();
    load_package_async_hook::instance()->hook_.enable();
    static_load_object_hook::instance()->hook_.enable();

    
    for (auto pawn : engine::FindObjects<ADishonoredNPCPawn>()) {
      static auto dead_head = engine::LoadObject<USkeletalMesh>(nullptr, L"NPC_Body_Eaten.Mesh.skm_head_eaten", nullptr, engine::load_flags::none, nullptr);

      pawn->m_pHeadMesh->SetSkeletalMesh(dead_head, false);
      pawn->m_pHeadMesh->UpdateMeshForBrokenConstraints();
    }

    for (auto item : engine::FindObjects<ADisAbstractItemPickup>()) {
      UDisSeqAct_GivePickup event{};
      event.m_pPickup = item->m_pTweaks;
      DishonoredPlayerPawn->OnGivePickup(&event);
    }

    while (GetAsyncKeyState(VK_END) == 0) { Sleep(1000); }
  }
}

void __stdcall unload(void* module) {
  process_event_hook::instance()->hook_.disable();
  load_package_hook::instance()->hook_.disable();
  load_package_async_hook::instance()->hook_.disable();
  static_load_object_hook::instance()->hook_.disable();

  FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
  LOG("Unloaded!");
}

[[maybe_unused]] auto __stdcall DllMain(void* module, const unsigned long reason, void*) -> bool {
  if (reason == DLL_PROCESS_ATTACH) CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), module, 0, nullptr);
  else if (reason == DLL_PROCESS_DETACH) CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(unload), module, 0, nullptr);
  return true;
}