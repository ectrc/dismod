#ifndef tick_brain_h
#define tick_brain_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef void (__thiscall *tick_brain_t)(
  UDishonoredAIBrain* brain,
  float delta
);

class tick_brain_hook {
public:
  tick_brain_hook();
  static auto instance() -> std::shared_ptr<tick_brain_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(
    UDishonoredAIBrain* brain,
    float delta
  ) -> void;
#else
  static auto __thiscall trampoline(
    UDishonoredAIBrain* brain,
    float delta
  ) -> void;
#endif

public:
  base_hook<tick_brain_t> hook_;
private:
  static std::shared_ptr<tick_brain_hook> instance_;
};

#endif