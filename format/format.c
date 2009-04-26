#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char stack_format_arg[256];
	strncpy(stack_format_arg, "%d%n\n", sizeof(stack_format_arg));
	fprintf(stderr, stack_format_arg, 0);
	return 1;
}
