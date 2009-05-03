set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")
add_executable (heap_double_free heap_double_free.c)
add_executable (heap_overflow heap_overflow.c)

install_targets(/bin heap_double_free heap_overflow)
