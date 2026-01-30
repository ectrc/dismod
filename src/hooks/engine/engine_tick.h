#ifndef engine_tick_h
#define engine_tick_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef void (__thiscall *engine_tick_t)(void* engine_loop);

class engine_tick_hook {
public:
  engine_tick_hook();
  static auto instance() -> std::shared_ptr<engine_tick_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(void* engine_loop) -> void;
#else
  static auto __thiscall trampoline(void* engine_loop) -> void;
#endif

public:
  base_hook<engine_tick_t> hook_;
private:
  static std::shared_ptr<engine_tick_hook> instance_;
};

#endif