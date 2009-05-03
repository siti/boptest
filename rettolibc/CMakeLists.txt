set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

add_executable (memcpy_ptr memcpy_ptr.c)
add_executable (strncpy_ptr strncpy_ptr.c)
add_executable (strncpys strncpy.c)

install_targets(/bin memcpy_ptr strncpy_ptr strncpys)
