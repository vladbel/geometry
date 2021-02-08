# shall be defined in parent dir
# TARGET_LIB_SHAPES shapes
# BLOCK_SEPARATOR
#

message(${BLOCK_SEPARATOR})
message("CMake ${TARGET_LIB_SHAPES} library")

add_library(${TARGET_LIB_SHAPES}
  STATIC
    circle.cpp
    circle.hpp
    polygon.cpp
    polygon.hpp
    rhombus.cpp
    rhombus.hpp
    square.cpp
    square.hpp
  )

target_compile_options(${TARGET_LIB_SHAPES}
  PRIVATE
  ${flags}
)
target_compile_features(${TARGET_LIB_SHAPES} PUBLIC cxx_std_17)

message(${BLOCK_SEPARATOR})