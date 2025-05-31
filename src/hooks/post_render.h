#ifndef post_render_h
#define post_render_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

#define LOG_PR 0

typedef void (__thiscall *post_render_t)(void* ctx, void* stack, void* result);

class post_render_hook {
public:
post_render_hook();
  static auto instance() -> std::shared_ptr<post_render_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(void* ctx, void* stack, void* result) -> void;
#else
  static auto __thiscall trampoline(void* ctx, void* stack, void* result) -> void;
#endif

public:
  base_hook<post_render_t> hook_;
private:
  static std::shared_ptr<post_render_hook> instance_;
};

#endif