set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

add_executable (execbss execbss.c)
add_executable (execdata execdata.c)
add_executable (execheap execheap.c)
add_executable (execstack execstack.c)

install_targets(/bin execbss execdata execheap execstack)
