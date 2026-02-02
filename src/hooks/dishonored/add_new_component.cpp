#include "add_new_component.h"

std::shared_ptr<add_new_component_hook> add_new_component_hook::instance_ = nullptr;

auto add_new_component_hook::instance() -> std::shared_ptr<add_new_component_hook> {
  if (!instance_) {
    instance_ = std::make_shared<add_new_component_hook>();
  }

  return instance_;
}

add_new_component_hook::add_new_component_hook() {
  this->hook_ = base_hook<add_new_component_t>{
    "add new component",
    hat::compile_signature<"55 8B EC 8B 45 ? 85 C0 74 ? 8B 51">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install add_new_component_hook");
    return;
  }
}

auto __thiscall add_new_component_hook::trampoline(
  UArkComponentContainer* brain,
  void* base_compo
) -> void {
  if (!brain) return LOG("cannot tick brain, it is null");
  return add_new_component_hook::instance()->hook_.original()(
    brain,
    base_compo
  );
}