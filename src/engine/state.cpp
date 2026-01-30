#include "state.h"
#include "logger.h"

std::atomic<state*> current_state = {nullptr};

auto get_state() -> state* {
  state* current = current_state.load();
  if (current == nullptr) {
    current = new state();
    current_state.store(current);
  }
  return current;
}

auto set_state(state* new_state) -> void {
  if (new_state == nullptr) {
    LOG("Attempted to set state to null");
    return;
  }
  current_state.store(new_state);
}