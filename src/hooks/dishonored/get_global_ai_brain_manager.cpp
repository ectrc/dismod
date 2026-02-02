#include "get_global_ai_brain_manager.h"
#include "windows.h"

std::shared_ptr<get_global_ai_brain_manager_hook> get_global_ai_brain_manager_hook::instance_ = nullptr;

auto get_global_ai_brain_manager_hook::instance() -> std::shared_ptr<get_global_ai_brain_manager_hook> {
  if (!instance_) {
    instance_ = std::make_shared<get_global_ai_brain_manager_hook>();
  }

  return instance_;
}

get_global_ai_brain_manager_hook::get_global_ai_brain_manager_hook() {
  this->hook_ = base_hook<get_global_ai_brain_manager_t>{
    "get global ai brain manager",
    hat::compile_signature<"8B 0D ? ? ? ? 56 33 F6 85 C9 74 ? E8 ? ? ? ? 85 C0 74 ? 8B 80 ? ? ? ? 5E C3 8B C6 5E C3 ? ? ? ? ? ? ? ? ? ? ? ? ? ? 8B 0D ? ? ? ? 56 33 F6 85 C9 74 ? E8 ? ? ? ? 85 C0 74 ? 8B B0 ? ? ? ? 8B CE">(),
    this->trampoline
  };

  if (!this->hook_.install()) {

    this->hook_ = base_hook<get_global_ai_brain_manager_t>{
      "init npc",
      hat::compile_signature<"8B 0D ? ? ? ? 56 33 F6 85 C9 74 ? E8 ? ? ? ? 85 C0 74 ? 8B 80 ? ? ? ? 5E C3 8B C6 5E C3 ? ? ? ? ? ? ? ? ? ? ? ? ? ? 8B 0D ? ? ? ? 56 33 F6 85 C9 74 ? E8 ? ? ? ? 85 C0 74 ? 8B 80 ? ? ? ? 5E C3 8B C6 5E C3 ? ? ? ? ? ? ? ? ? ? ? ? ? ? 55">(),
      this->trampoline
    };
    if (!this->hook_.install()) {
      LOG("Failed to install get_global_ai_brain_manager_hook");
      return;
    }
  }
}

auto __cdecl get_global_ai_brain_manager_hook::trampoline() -> UDishonoredGlobalAIManager* {
  return get_global_ai_brain_manager_hook::instance()->hook_.original()();
}