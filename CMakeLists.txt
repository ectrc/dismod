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

file(GLOB RESOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/resources/*.png")
set(RESOURCE_SOURCES "")

foreach(RES_FILE ${RESOURCE_FILES})
  get_filename_component(RES_NAME ${RES_FILE} NAME)
  set(OUT_CPP "${CMAKE_CURRENT_SOURCE_DIR}/resources/${RES_NAME}.hpp")

  add_custom_command(
          OUTPUT ${OUT_CPP}
          COMMAND xxd -i ${RES_FILE} > ${OUT_CPP}
          COMMAND powershell -Command " (Get-Content '${OUT_CPP}' -Raw) -replace 'D__Christmas_github_dismod_', '' | Set-Content '${OUT_CPP}' "
          DEPENDS ${RES_FILE}
          COMMENT "Converting ${RES_FILE} to C++ array"
          VERBATIM
  )
  list(APPEND RESOURCE_SOURCES ${OUT_CPP})
endforeach()

set(DXSDK_ROOT "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)" CACHE PATH "DirectX SDK path")
set(DXSDK_INCLUDE "${DXSDK_ROOT}/Include")
set(DXSDK_LIB "${DXSDK_ROOT}/Lib/x86")
link_directories("${DXSDK_LIB}")

add_library(dismod SHARED
        library.cpp

        src/hooks/engine/process_event.cpp
        src/hooks/engine/load_package.cpp
        src/hooks/engine/load_package_async.cpp
        src/hooks/engine/static_load_object.cpp
        src/hooks/engine/static_find_object.cpp
        src/hooks/engine/static_construct_object.cpp
        src/hooks/engine/static_duplicate_object.cpp
        src/hooks/engine/spawn_actor_from_tweaks.cpp
        src/hooks/engine/spawn_actor.cpp

        src/engine/engine.cpp
        src/engine/state.cpp

        src/mods/spawn.cpp
        src/hooks/dishonored/world.h
        src/hooks/dishonored/world.cpp

        src/render/render.cpp
        src/render/render.h
        src/hooks/render/end_scene.h
        src/hooks/render/end_scene.cpp

        external/imgui/imgui.cpp
        external/imgui/imgui_draw.cpp
        external/imgui/imgui_widgets.cpp
        external/imgui/imgui_demo.cpp
        external/imgui/imgui_tables.cpp
        external/imgui/backends/imgui_impl_dx9.cpp
        external/imgui/backends/imgui_impl_win32.cpp

        ${RESOURCE_SOURCES}
)
target_include_directories(dismod PUBLIC include src
        external/imgui
        external/imgui/backends
        ${CMAKE_CURRENT_SOURCE_DIR}/resources
        ${DXSDK_INCLUDE}
)
target_link_libraries(dismod PUBLIC
        libhat
        sdk
        minhook
        d3d9
        d3dx9
)