#ifndef process_event_h
#define process_event_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#define LOG_PE 0

typedef void (__thiscall *process_event_t)(UObject* object, UFunction* function, void* params, void* result);

class process_event_hook {
public:
  process_event_hook();
  static auto instance() -> std::shared_ptr<process_event_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(UObject* object, UFunction* function, void* params, void* result) -> void;
#else
  static auto __thiscall trampoline(UObject* object, UFunction* function, void* params, void* result) -> void;
#endif

public:
  base_hook<process_event_t> hook_;
private:
  static std::shared_ptr<process_event_hook> instance_;
};

#endif