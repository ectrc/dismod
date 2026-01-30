#ifndef spawn_actor_by_tweaks_h
#define spawn_actor_by_tweaks_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef AActor* (__thiscall *spawn_actor_from_tweaks_t)(
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
);

class spawn_actor_from_tweaks_hook {
public:
  spawn_actor_from_tweaks_hook();
  static auto instance() -> std::shared_ptr<spawn_actor_from_tweaks_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(
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
  ) -> AActor*;
#else
  static auto __thiscall trampoline(
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
  ) -> AActor*;
#endif

public:
  base_hook<spawn_actor_from_tweaks_t> hook_;
private:
  static std::shared_ptr<spawn_actor_from_tweaks_hook> instance_;
};

#endif