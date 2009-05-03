/* getdll.c - Get the address of a function in a shared library and print it
 *
 * Copyright (c)2003 by Peter Busser <peter@adamantix.org>
 * This file has been released under the GNU Public Licence version 2 or later
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(int argc, char **argv)
{
	void *handle = dlopen(RTLD_DEFAULT, RTLD_LAZY);
	if (!handle)
		return 1;
	printf("%p\n", dlsym(handle, "system"));
	dlclose(handle);
	return 0;
}
