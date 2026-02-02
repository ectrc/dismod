cmake_minimum_required(VERSION 3.30)
project(dismod)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)
set(CMAKE_CXX_FLAGS /bigobj)

if (MSVC)
  add_compile_options(/EHsc)
endif()

add_subdirectory(external/libhat)
add_subdirectory(external/minhook)
add_subdirectory(external/sdk)

add_library(dismod SHARED
  library.cpp

  src/hooks/engine/process_event.cpp
  src/hooks/engine/load_package.cpp
  src/hooks/engine/load_package_async.cpp
  src/hooks/engine/static_load_object.cpp
  src/hooks/engine/static_construct_object.cpp
  src/hooks/engine/spawn_actor_from_tweaks.cpp
  src/hooks/engine/spawn_actor.cpp
  src/hooks/engine/engine_tick.cpp
  src/hooks/dishonored/create_npc_pawn.cpp
  src/hooks/dishonored/tick_brain.cpp
  src/hooks/dishonored/init_npc.cpp
  src/hooks/dishonored/get_global_ai_brain_manager.cpp
  src/hooks/dishonored/add_new_component.cpp

  src/engine/engine.cpp
  src/engine/state.cpp
  src/engine/finder.cpp

  src/mods/spawn.cpp
        include/dishonored.h
        src/hooks/dishonored/components/ai_monitor.h
        src/hooks/dishonored/components/component_base.h
)
target_include_directories(dismod PUBLIC include src 
  external/imgui
  external/imgui/backends
)
target_link_libraries(dismod PUBLIC 
  libhat 
  sdk 
  minhook
  d3d9
)