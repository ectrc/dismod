#ifndef add_new_component_h
#define add_new_component_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef void (__thiscall *add_new_component_t)(
  UArkComponentContainer* brain,
  void* base_compo
);

class add_new_component_hook {
public:
  add_new_component_hook();
  static auto instance() -> std::shared_ptr<add_new_component_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(
    UDishonoredAIBrain* brain,
    float delta
  ) -> void;
#else
  static auto __thiscall trampoline(
    UArkComponentContainer* brain,
    void* base_compo
  ) -> void;
#endif

public:
  base_hook<add_new_component_t> hook_;
private:
  static std::shared_ptr<add_new_component_hook> instance_;
};

#endif