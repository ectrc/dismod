#include "fire_dialog.h"

std::shared_ptr<fire_dialog_hook> fire_dialog_hook::instance_ = nullptr;

auto fire_dialog_hook::instance() -> std::shared_ptr<fire_dialog_hook> {
  if (!instance_) {
    instance_ = std::make_shared<fire_dialog_hook>();
  }

  return instance_;
}

fire_dialog_hook::fire_dialog_hook() {
  this->hook_ = base_hook<fire_dialog_t>{
    "fire dialog",
    hat::compile_signature<"55 8B EC 8B 45 10 8B 55 0C 89">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install fire_dialog_hook");
    return;
  }
}

auto __thiscall fire_dialog_hook::trampoline(ADisPlayerAudioLogDummyActor* dummy, EeDisDialogHook hook, void* initiator, UAkEvent** event) -> void {
  LOG("fire dialog {}", dummy->GetFullName());

  for (const auto& oneShot : dummy->m_DialogOneShots) {
    if (oneShot.m_pOneShot) {
      LOG("  {}: ", oneShot.m_pOneShot->m_DataPackage.ToString());
    }
  }

  return fire_dialog_hook::instance()->hook_.original()(dummy, hook, initiator, event);
}