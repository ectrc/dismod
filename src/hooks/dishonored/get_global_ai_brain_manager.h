#ifndef get_global_ai_brain_manager_h
#define get_global_ai_brain_manager_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef UDishonoredGlobalAIManager* (__cdecl *get_global_ai_brain_manager_t)();

class get_global_ai_brain_manager_hook {
public:
  get_global_ai_brain_manager_hook();
  static auto instance() -> std::shared_ptr<get_global_ai_brain_manager_hook>;

  static auto __cdecl trampoline() -> UDishonoredGlobalAIManager*;
public:
  base_hook<get_global_ai_brain_manager_t> hook_;
private:
  static std::shared_ptr<get_global_ai_brain_manager_hook> instance_;
};

#endif