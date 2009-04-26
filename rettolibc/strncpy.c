#include <string.h>
#include <stdio.h>

void local_vuln_function(char *data, size_t len)
{
	char a[32];
	strncpy(a, data, len);
}

#define LOCAL_VULN_FUNCTION 1
#include "shared.h"

int main(int argc, char **argv)
{
	run_function();
}

