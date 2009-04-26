#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef void* (*copy_function) (void *dest, void *src, size_t len);

#define NUM_FPOINTERS 6

#ifndef LOCAL_VULN_FUNCTION
void local_vuln_function(char *data, size_t len)
{

}
#endif

void function(void)
{
	fprintf(stderr, "Function was able to be called\n");
	exit(255);
}

void vuln_function_fptr(copy_function cfunction, void *arg, size_t len)
{
	void *a[4];
	cfunction(a, arg, len);
}


void* generate_function_pointers(size_t *length)
{
	*length = sizeof(void*) * NUM_FPOINTERS;
	void (**function_pointers) (void) = malloc(*length);
	for (size_t i = 0; i < NUM_FPOINTERS; i++) {
		function_pointers[i] = function;
	}
	return function_pointers;
}

void run_function_pointer(copy_function cfunction)
{
	size_t len;
	void* fpointers = generate_function_pointers(&len);
	vuln_function_fptr(cfunction, fpointers, len);
	fprintf(stderr, "Code did not crash or overflow stack pointer\n");
	free(fpointers);
	exit(254);
}

void run_function(void)
{
	size_t len;
	void* fpointers = generate_function_pointers(&len);
	local_vuln_function(fpointers, len);
	fprintf(stderr, "Code did not crash or overflow stack pointer\n");
	free(fpointers);
	exit(254);
}
