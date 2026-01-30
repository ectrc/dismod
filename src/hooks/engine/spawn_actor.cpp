#include "spawn_actor.h"

std::shared_ptr<spawn_actor_hook> spawn_actor_hook::instance_ = nullptr;

auto spawn_actor_hook::instance() -> std::shared_ptr<spawn_actor_hook> {
  if (!instance_) {
    instance_ = std::make_shared<spawn_actor_hook>();
  }

  return instance_;
}

spawn_actor_hook::spawn_actor_hook() {
  this->hook_ = base_hook<spawn_actor_t>{
    "spoawn actor",
    hat::compile_signature<"55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 89 4D ? C7 45 ? 00 00 00 00 E8">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install spawn_actor_hook");
    return;
  }
}

auto __thiscall spawn_actor_hook::trampoline(
  UWorld* base,
  UClass* class_,
  FName in_name,
  const FVector* location,
  const FRotator* rotation,
  AActor* template_actor,
  uint32_t no_collision_fail,
  uint32_t remote_owned,
  AActor* owner,
  APawn* instigator,
  uint32_t no_fail,
  uint32_t out_of_bend_time,
  void* init_func
) -> AActor* {
  return spawn_actor_hook::instance()->hook_.original()(
    base,
    class_,
    in_name,
    location,
    rotation,
    template_actor,
    no_collision_fail,
    remote_owned,
    owner,
    instigator,
    no_fail,
    out_of_bend_time,
    init_func
  );
}