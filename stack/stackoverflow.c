#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*vfunction)(void);

void ret_function(void)
{
	exit(0);
}

void function(void)
{
	vfunction stupid_value;
	vfunction a[64];
	vfunction b[64];
	memset(b, 0, 256);
	for (size_t i = 0; i < 96; i++) {
		a[i] = ret_function;
	}
	for (size_t i = 0; i < 96; i++) {
		b[i] = ret_function;
	}
	if (memcmp(a,b, sizeof(vfunction) * 64) != 0)
		exit(1);
}

int main(int argc, char **argv)
{
	function();
	return 1;
}
