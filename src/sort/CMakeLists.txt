# shall be defined in parent dir
# TARGET_LIB_SORT sort
# BLOCK_SEPARATOR
#

message(${BLOCK_SEPARATOR})
message("CMake ${TARGET_LIB_SORT} library")

add_library(${TARGET_LIB_SORT}
  STATIC
    heapSort.cpp
  )

target_compile_options(${TARGET_LIB_SORT}
  PRIVATE
  ${flags}
)
target_compile_features(${TARGET_LIB_SORT} PUBLIC cxx_std_17)

message(${BLOCK_SEPARATOR})