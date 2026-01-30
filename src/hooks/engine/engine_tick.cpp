#include "engine_tick.h"
#include "../../mods/spawn.h"

std::shared_ptr<engine_tick_hook> engine_tick_hook::instance_ = nullptr;

auto engine_tick_hook::instance() -> std::shared_ptr<engine_tick_hook> {
  if (!instance_) {
    instance_ = std::make_shared<engine_tick_hook>();
  }

  return instance_;
}

engine_tick_hook::engine_tick_hook() {
  this->hook_ = base_hook<engine_tick_t>{
    "engine tick",
    hat::compile_signature<"55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F9 83 3D ? ? ? ? 00 74">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install engine_tick_hook");
    return;
  }
}

auto __thiscall engine_tick_hook::trampoline(void* engine_loop) -> void {
  return engine_tick_hook::instance()->hook_.original()(engine_loop);
}