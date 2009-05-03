/* execstack.c - Tests wether code on the stack can be executed
 *
 * Copyright (c)2003 by Peter Busser <peter@adamantix.org>
 * This file has been released under the GNU Public Licence version 2 or later
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "shared.h"

const char testname[] = "Executable stack                         ";

int main(int argc, char **argv)
{
	char buf[8192];
	vfunction func;

	/* Put a RETN instruction in the buffer */
	buf[0] = '\xc3';

	/* Convert the pointer to a function pointer */
	func = (vfunction)buf;

	/* Call the code in the buffer */
	func();

	fprintf(stderr, "Stack is executable\n");
	return 0;
}
