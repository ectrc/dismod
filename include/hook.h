#ifndef base_hook_h
#define base_hook_h

#include <cstddef>

#include <windows.h>
#include <cstdint>
#include <span>
#include <memory>

#include "libhat.hpp"
#include "minhook.h"
#include "logger.h"

static std::once_flag init_flag{};

template<typename function_typename>
class base_hook {
public:
  typedef function_typename function_t;
  typedef function_typename* function_ptr_t;

public:
  base_hook() = default;

  base_hook(const char* tag, std::byte* target, void* trampoline) : tag_(tag), target_(target), trampoline_(reinterpret_cast<std::byte*>(trampoline)) {}
  
  base_hook(const char* tag, const hat::signature_view& pattern, void* trampoline) {
    this->tag_ = tag;
    
    std::call_once(init_flag, []() {
      if (MH_Initialize() != MH_OK) {
        // LOG("failed to initialize minhook");
        return;
      }
    });

    static const hat::process::module process_module = hat::process::get_process_module();
    static const auto dos_header = reinterpret_cast<const IMAGE_DOS_HEADER*>(process_module.address());
    const auto headers = *reinterpret_cast<const IMAGE_NT_HEADERS*>(reinterpret_cast<uintptr_t>(dos_header) + dos_header->e_lfanew);
    const auto scan_result = hat::find_pattern(reinterpret_cast<const std::byte*>(dos_header), reinterpret_cast<const std::byte*>(dos_header) + headers.OptionalHeader.SizeOfCode, pattern);

    if (scan_result.has_result()) this->target_ = const_cast<std::byte*>(scan_result.get());
    this->trampoline_ = reinterpret_cast<std::byte*>(trampoline);
  }

  auto install() -> bool {
    if (this->target_ == nullptr) {
      LOG("[{}] target address is null", this->tag_);
      return false;
    }

    if (const auto result = MH_CreateHook(this->target_, this->trampoline_, reinterpret_cast<void**>(&this->original_)); result != MH_OK) {
      LOG("[{}] failed to create hook for address, error code {}", this->tag_, MH_StatusToString(result));
      return false;
    }

    LOG("[{}] hook placed successfully at {}", this->tag_, (void*)this->target_);
    return true;
  }

  auto uninstall() -> bool {
    if (this->target_ == nullptr) {
      LOG("[{}]() target address is null", this->tag_);
      return false;
    }

    if (MH_RemoveHook(this->target_) != MH_OK) {
      LOG("[{}] failed to remove hook", this->tag_);
      return false;
    }

    LOG("[{}] hook removed successfully", this->tag_);
    return true;
  }

  auto enable() -> bool {
    if (this->target_ == nullptr) return false;

    if (MH_EnableHook(this->target_) != MH_OK) {
      return false;
    }
    return true;
  }

  auto disable() -> bool {
    if (this->target_ == nullptr) return false;
    if (MH_DisableHook(this->target_) != MH_OK) {
      return false;
    }
    return true;
  }

  ~base_hook() {
    if(!this->disable()) return;
    if(!this->uninstall()) return;
  }

  auto original() const -> function_t {
    return this->original_;
  }

private:
  std::byte* target_ = 0;
  std::byte* trampoline_ = 0;
  function_t original_ = 0;
  const char* tag_ = "unnamed";
};


#include <memory>

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


#define DEFINE_RAW_HOOK( \
    HookName, \
    Address, \
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
            (std::byte*)(Address), \
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