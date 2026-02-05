#ifndef end_scene_h
#define end_scene_h

#include "hook.h"

#include <windows.h>
#include <memory>
#include <d3d9.h>

#include "render/render.h"

typedef HRESULT (APIENTRY *end_scene_t)(LPDIRECT3DDEVICE9 device);

class end_scene_hook {
public:
    end_scene_hook();

    static auto instance() -> std::shared_ptr<end_scene_hook>;
    static auto APIENTRY trampoline(LPDIRECT3DDEVICE9 device) -> HRESULT;

public:
    base_hook<end_scene_t> hook_;

    static IDirect3DDevice9* device_;
private:
    static std::shared_ptr<end_scene_hook> instance_;
};

DEFINE_HOOK(
    process_input,
    "55 8B EC 56 8B F1 8B 0D ? ? ? ? ? ? 8B 90 ? ? ? ? 57 FF D2",
    boolean,
    ADishonoredPlayerController*, uint32_t mask
);

inline auto __thiscall process_input_hook::trampoline(ADishonoredPlayerController* controller, uint32_t mask) -> boolean {
    if (render::draw_enabled.load()) return false;
    return process_input_hook::instance()->hook_.original()(controller, mask);
}

#endif
