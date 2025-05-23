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
  src/hooks/process_event.cpp
)
target_include_directories(dismod PUBLIC include src)
target_link_libraries(dismod PUBLIC 
  libhat 
  sdk 
  minhook
)