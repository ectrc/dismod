#include "static_find_object.h"

std::shared_ptr<static_find_object_hook> static_find_object_hook::instance_ = nullptr;

auto static_find_object_hook::instance() -> std::shared_ptr<static_find_object_hook> {
  if (!instance_) {
    instance_ = std::make_shared<static_find_object_hook>();
  }

  return instance_;
}

static_find_object_hook::static_find_object_hook() {
  this->hook_ = base_hook<static_find_object_t>{
    "static find object",
    hat::compile_signature<"55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 83 3D ? ? ? ? 00 75 ? 83 3D ? ? ? ? 00">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install static_load_object_hook");
    return;
  }
}

auto __cdecl static_find_object_hook::trampoline(UClass *ObjectClass, UObject *InObjectPackage, const wchar_t *OrigInName, unsigned int ExactClass) -> UObject* {
  return static_find_object_hook::instance()->hook_.original()(ObjectClass, InObjectPackage, OrigInName, ExactClass);
}