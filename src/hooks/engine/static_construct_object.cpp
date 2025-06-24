#include "static_construct_object.h"

std::shared_ptr<static_construct_object_hook> static_construct_object_hook::instance_ = nullptr;

auto static_construct_object_hook::instance() -> std::shared_ptr<static_construct_object_hook> {
  if (!instance_) {
    instance_ = std::make_shared<static_construct_object_hook>();
  }

  return instance_;
}

static_construct_object_hook::static_construct_object_hook() {
  this->hook_ = base_hook<static_construct_object_t>{
    "static construct object",
    hat::compile_signature<"55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 83 EC 0C 53 56 57 A1 ?? ?? ?? ?? 33 C5 50 8D 45 F4 64 A3 00 00 00 00 8B 45 2C">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install static_construct_object_hook");
    return;
  }
}

auto __cdecl static_construct_object_hook::trampoline(UClass* object_class, UObject* outer, FName name, DWORD object_flags, UObject* template_, void* error, UObject* sub_object_root, void* graph, int a1, int a2) -> UObject* {
#if LOG_SCO
  LOG("StaticConstructObject({}, {}, {}, {}, {}, {}, {}, {}, {}, {})",
    object_class != nullptr ? object_class->GetName() : "nullptr", 
    outer != nullptr ? outer->GetName() : "nullptr", 
    name.ToString(),
    object_flags,
    template_ != nullptr ? template_->GetName() : "nullptr",
    error != nullptr ? "error" : "nullptr",
    sub_object_root != nullptr ? sub_object_root->GetName() : "nullptr",
    graph != nullptr ? "graph" : "nullptr",
    a1,
    a2
  );
#endif

  return static_construct_object_hook::instance()->hook_.original()(object_class, outer, name, object_flags, template_, error, sub_object_root, graph, a1, a2);
}