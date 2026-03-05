#include "process_event.h"

#include "engine/state.h"
#include "engine/engine.h"
#include "mods/spawn.h"

auto __thiscall process_event_hook::trampoline(UObject* object, UFunction* function, void* params, void* result) -> void {
  if (object == nullptr || function == nullptr) return;

#if LOG_PE
  LOG("{}->ProcessEvent({})", object->GetName(), function->GetFullName());
#endif

  return instance()->hook_.original()(object, function, params, result);
}
