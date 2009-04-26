#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	void *buf = malloc(sizeof(void*));
	size_t src[2], size;
	size = sizeof(src);
	memset(src, 0, size);
	memcpy(buf, src, size);
	free(buf);
	
	return 0;
}
