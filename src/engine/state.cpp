#include "state.h"

std::atomic<state*> current_state = {nullptr};

auto get_state() -> state* {
  state* current = current_state.load();
  if (current == nullptr) {
    current = new state();
    current_state.store(current);
  }
  return current;
}