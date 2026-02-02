#include "library.h"

#include "hooks/engine/process_event.h"
#include "hooks/engine/load_package.h"
#include "hooks/engine/load_package_async.h"
#include "hooks/engine/static_load_object.h"
#include "hooks/engine/static_construct_object.h"
#include "hooks/engine/spawn_actor_from_tweaks.h"
#include "hooks/engine/spawn_actor.h"
#include "hooks/engine/engine_tick.h"

#include "hooks/dishonored/tick_brain.h"
#include "hooks/dishonored/create_npc_pawn.h"
#include "hooks/dishonored/init_npc.h"

#include "hooks/dishonored/components/ai_monitor.h"
#include "hooks/dishonored/components/ai_knowledge.h"
#include "hooks/dishonored/components/init_sterring.h"
#include "hooks/dishonored/components/look_at.h"

#include "engine/engine.h"
#include "engine/state.h"
#include "engine/finder.h"

#include "mods/spawn.h"

auto __stdcall thread(void* module) -> void {
  CLEAR_CONSOLE();
  LOG("Welcome!");

  const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
  gobjects = reinterpret_cast<TArray<UObject*>*>(base + 0x1023630);
  gnames = reinterpret_cast<TArray<FNameEntry*>*>(base + 0x1035674);

  const auto state = get_state();
  state->pawn = *reinterpret_cast<ADishonoredPlayerPawn**>(base + 0x105F628);
  state->controller = reinterpret_cast<ADishonoredPlayerController*>(state->pawn->Controller);

  {
    process_event_hook::instance()->hook_.enable();
    load_package_hook::instance()->hook_.enable();
    load_package_async_hook::instance()->hook_.enable();
    static_load_object_hook::instance()->hook_.enable();
    static_construct_object_hook::instance()->hook_.enable();
    spawn_actor_from_tweaks_hook::instance()->hook_.enable();
    spawn_actor_hook::instance()->hook_.enable();
    init_npc_hook::instance()->hook_.enable();
    tick_brain_hook::instance()->hook_.enable();

    ai_monitor_init_hook::instance()->hook_.enable();
    add_ai_knowledge_to_component_manager_hook::instance()->hook_.enable();
    init_steering_hook::instance()->hook_.enable();
    look_at_comp_hook::instance()->hook_.enable();
    init_brain_hook::instance()->hook_.enable();

    get_default_object_hook::instance()->hook_.enable();
    get_ai_behaviour_tweak_for_slot_hook::instance()->hook_.enable();
    init_stim_hook::instance()->hook_.enable();

    mods::spawn_test_pawn(); // blocks
    Sleep(20000);
  }

  FreeLibraryAndExitThread(static_cast<HMODULE>(module), 0);
}

void __stdcall unload(void* module) {
  process_event_hook::instance()->hook_.disable();
  load_package_hook::instance()->hook_.disable();
  load_package_async_hook::instance()->hook_.disable();
  static_load_object_hook::instance()->hook_.disable();
  static_construct_object_hook::instance()->hook_.disable();
  spawn_actor_from_tweaks_hook::instance()->hook_.disable();
  spawn_actor_hook::instance()->hook_.disable();
  init_npc_hook::instance()->hook_.disable();
  tick_brain_hook::instance()->hook_.disable();

  ai_monitor_init_hook::instance()->hook_.disable();
  add_ai_knowledge_to_component_manager_hook::instance()->hook_.disable();
  init_steering_hook::instance()->hook_.disable();
  look_at_comp_hook::instance()->hook_.disable();
  init_brain_hook::instance()->hook_.disable();

  get_default_object_hook::instance()->hook_.disable();
  get_ai_behaviour_tweak_for_slot_hook::instance()->hook_.disable();
  init_stim_hook::instance()->hook_.disable();

  LOG("Unloaded!");
}

[[maybe_unused]] auto __stdcall DllMain(void* module, const unsigned long reason, void*) -> bool {
  if (reason == DLL_PROCESS_ATTACH) CreateThread(nullptr, 0,  reinterpret_cast<LPTHREAD_START_ROUTINE>(thread), module, 0, nullptr);
  else if (reason == DLL_PROCESS_DETACH) unload(module);
  return true;
}