#include "process_event.h"

#include "engine/state.h"
#include "engine/engine.h"

#include "mods/spawn.h"

std::shared_ptr<process_event_hook> process_event_hook::instance_ = nullptr;

auto process_event_hook::instance() -> std::shared_ptr<process_event_hook> {
  if (!instance_) {
    instance_ = std::make_shared<process_event_hook>();
  }

  return instance_;
}

process_event_hook::process_event_hook() {
  this->hook_ = base_hook<process_event_t>{
    "process event",
    hat::compile_signature<"55 8B EC 6A ?? 68 ?? ?? ?? ?? 64 A1 ?? ?? ?? ?? 50 83 EC ?? A1 ?? ?? ?? ?? 33 C5 89 45 ?? 53 56 57 50 8D 45 ?? 64 A3 ?? ?? ?? ?? 8B F1">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install process_event_hook");
    return;
  }
}

auto __thiscall process_event_hook::trampoline(UObject* object, UFunction* function, void* params, void* result) -> void {
  if (object == nullptr || function == nullptr) return;

  #if LOG_PE
  LOG("{}->ProcessEvent({})", object->GetName(), function->GetFullName());
#endif

  return process_event_hook::instance()->hook_.original()(object, function, params, result);
}