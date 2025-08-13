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
    hat::compile_signature<"55 8B EC 33 C0 F6 41">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install spawn_actor_hook");
    return;
  }
}

auto __thiscall spawn_actor_hook::trampoline(
  UDisTweaksBase* base,
  EeDisTweaksSpawnType spawn_type,
  FName in_name,
  const FVector* location,
  const FRotator* rotation,
  AActor* template_actor,
  uint32_t no_collision_fail,
  uint32_t remote_owned,
  AActor* owner,
  APawn* instigator,
  uint32_t no_fail,
  uint32_t out_of_bend_time
) -> AActor* {
  LOG("SpawnActor: {} {} {}", base->GetFullName(), (uint8_t)spawn_type, in_name.ToString());

  return spawn_actor_hook::instance()->hook_.original()(
    base,
    spawn_type,
    in_name,
    location,
    rotation,
    template_actor,
    no_collision_fail,
    remote_owned,
    owner,
    instigator,
    no_fail,
    out_of_bend_time
  );
}