#include "tick_brain.h"

std::shared_ptr<tick_brain_hook> tick_brain_hook::instance_ = nullptr;

auto tick_brain_hook::instance() -> std::shared_ptr<tick_brain_hook> {
  if (!instance_) {
    instance_ = std::make_shared<tick_brain_hook>();
  }

  return instance_;
}

tick_brain_hook::tick_brain_hook() {
  this->hook_ = base_hook<tick_brain_t>{
    "tick brain",
    hat::compile_signature<"55 8B EC 56 8B F1 F6 46 ? ? 0F 84">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install tick_brain_hook");
    return;
  }
}

auto __thiscall tick_brain_hook::trampoline(
  UDishonoredAIBrain* brain,
  float delta
) -> void {
  if (!brain) return LOG("cannot tick brain, it is null");
  return tick_brain_hook::instance()->hook_.original()(
    brain,
    delta
  );
}