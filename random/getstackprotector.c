#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char buf[256];
	void **ptr = (void**)(buf + sizeof(buf));
	memset(buf, 0, sizeof(buf));
	strcpy(buf, argv[0]);
	for (size_t i = 0; i < 4; i++) {
		printf("%p\n", ptr[i]);
	}
	return 0;
}
