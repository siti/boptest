set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

add_executable (getstack getstack.c)
add_executable (getmain getmain.c)
add_executable (getstackprotector getstackprotector.c)
add_executable (getvsyscall getvsyscall.c)
add_executable (getamap getamap.c)


