# set(SHAPES_LIB_NAME, shapes) # shall be defined in parent dir

message(${BLOCK_SEPARATOR})
message("Building ${SHAPES_LIB_NAME} library")

add_library(${SHAPES_LIB_NAME}
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

target_compile_options(${SHAPES_LIB_NAME}
  PRIVATE
    ${flags}
  )

message(${BLOCK_SEPARATOR})