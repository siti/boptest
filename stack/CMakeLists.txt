set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

add_executable (stackoverflow stackoverflow.c)

install_targets(/bin stackoverflow)
