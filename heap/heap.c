#include <stdlib.h>

int main(int argc, char **argv)
{
	void **a = malloc(sizeof(void*));
	free(a);
	free(a);
	return 1;
}
