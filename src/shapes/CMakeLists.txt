add_library(shapes
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

target_compile_options(shapes
  PRIVATE
    ${flags}
  )