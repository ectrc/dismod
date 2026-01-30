#ifndef LIBRARY_H
#define LIBRARY_H

#include <windows.h>
#include <cstdint>
#include <numbers>

#include "logger.h"

auto __stdcall thread(void* module) -> void;
[[maybe_unused]] auto __stdcall DllMain(void* module, unsigned long reason, void*) -> bool;

#endif