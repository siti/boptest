#Optimize so fortify gets enabled (happens on some distros)...
set(CMAKE_C_FLAGS "-std=gnu99")
add_executable (heap heap.c)
add_executable (heap_overflow heap_overflow.c)
