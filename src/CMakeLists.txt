# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
set(CMAKE_BUILD_TYPE Debug)

# project name and language
project(geometry LANGUAGES CXX)

message("C++ compiler flags: ${CMAKE_CXX_FLAGS}")

list(APPEND flags "-fPIC" "-Wall")
if(NOT WIN32)
  list(APPEND flags "-Wextra" "-Wpedantic")
endif()

add_subdirectory(shapes)

add_executable(compute-areas compute-areas.cpp)
include_directories(compute-areas, shapes)

target_compile_options(compute-areas
  PRIVATE
    "-fPIC"
  )

target_link_libraries(compute-areas shapes)
