set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

add_executable (getstack getstack.c)
add_executable (getmain getmain.c)
add_executable (getstackprotector getstackprotector.c)
add_executable (getvsyscall getvsyscall.c)
add_executable (getamap getamap.c)
add_executable (getdll getdll.c)
add_executable (getheap getheap.c)

install_targets(/bin getstack getmain getstackprotector getvsyscall getamap getdll getheap)
