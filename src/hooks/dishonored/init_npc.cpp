#include "init_npc.h"
#include "windows.h"

std::shared_ptr<init_npc_hook> init_npc_hook::instance_ = nullptr;

auto init_npc_hook::instance() -> std::shared_ptr<init_npc_hook> {
  if (!instance_) {
    instance_ = std::make_shared<init_npc_hook>();
  }

  return instance_;
}

init_npc_hook::init_npc_hook() {
  this->hook_ = base_hook<init_npc_t>{
    "init npc",
    hat::compile_signature<"55 8B EC 83 EC ? 56 57 8B 7D ? 8B F1 85 FF 74 ? ? ? 8B 90">(),
    this->trampoline
  };

  if (!this->hook_.install()) {

    this->hook_ = base_hook<init_npc_t>{
      "init npc",
      reinterpret_cast<std::byte*>(GetModuleHandleW(0) + 0x7632E0), // TODO: why does it not find this?
      this->trampoline
    };
    if (!this->hook_.install()) {
      LOG("Failed to install init_npc_hook");
      return;
    }
  }
}

auto __thiscall init_npc_hook::trampoline(
  ADishonoredNPCController* controller,
  UDisTweaks_AIBrain* brain_tweak,
  void* suspicion
) -> void {
  LOG("{}", brain_tweak->GetFullName());
  return init_npc_hook::instance()->hook_.original()(
    controller,
    brain_tweak,
    suspicion
  );
}