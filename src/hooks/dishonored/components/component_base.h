#ifndef DISMOD_COMPONENT_BASE_H
#define DISMOD_COMPONENT_BASE_H

#pragma once

#include <memory>
#include "hook.h"

#define HOOK_STRINGIZE_IMPL(x) #x
#define HOOK_STRINGIZE(x) HOOK_STRINGIZE_IMPL(x)

#define DEFINE_HOOK( \
    HookName, \
    Signature, \
    RetType, \
    ... \
) \
typedef RetType (__thiscall *HookName##_t)(__VA_ARGS__); \
\
class HookName##_hook { \
public: \
    HookName##_hook() { \
        this->hook_ = base_hook<HookName##_t>{ \
            HOOK_STRINGIZE(HookName), \
            hat::compile_signature<Signature>(), \
            this->trampoline \
        }; \
\
        if (!this->hook_.install()) { \
            LOG("Failed to install " HOOK_STRINGIZE(HookName)); \
            return; \
        } \
    } \
\
    static auto instance() -> std::shared_ptr<HookName##_hook> { \
        if (!instance_) { \
            instance_ = std::make_shared<HookName##_hook>(); \
        } \
        return instance_; \
    } \
\
    static auto __thiscall trampoline(__VA_ARGS__) -> RetType; \
\
public: \
    base_hook<HookName##_t> hook_; \
\
private: \
    inline static std::shared_ptr<HookName##_hook> instance_; \
};



#endif