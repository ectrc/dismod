#ifndef end_scene_h
#define end_scene_h

#include "hook.h"

#include <windows.h>
#include <memory>
#include <d3d9.h>

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

#endif