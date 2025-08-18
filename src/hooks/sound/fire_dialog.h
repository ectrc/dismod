#ifndef fire_dialog_h
#define fire_dialog_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef void (__thiscall *fire_dialog_t)(ADisPlayerAudioLogDummyActor* dummy, EeDisDialogHook hook, void* nitiator, UAkEvent** event);

class fire_dialog_hook {
public:
  fire_dialog_hook();
  static auto instance() -> std::shared_ptr<fire_dialog_hook>;
#ifdef __INTELLISENSE__
  static auto trampoline(ADisPlayerAudioLogDummyActor* dummy, EeDisDialogHook hook, void* initiator, UAkEvent** event) -> void;
#else
  static auto __thiscall trampoline(ADisPlayerAudioLogDummyActor* dummy, EeDisDialogHook hook, void* initiator, UAkEvent** event) -> void;
#endif

public:
  base_hook<fire_dialog_t> hook_;
private:
  static std::shared_ptr<fire_dialog_hook> instance_;
};

#endif