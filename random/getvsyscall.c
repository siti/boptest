#include <stdio.h>
#include <stdlib.h>
#include <asm/vsyscall.h>

int main(int argc, char *argv[])
{
	printf("%p\n", (void*)VSYSCALL_ADDR(__NR_vgettimeofday));
	return 0;
}
