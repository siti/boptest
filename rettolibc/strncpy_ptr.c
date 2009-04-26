#include "shared.h"

int main(int argc, char **argv)
{
	run_function_pointer((copy_function)strncpy);
}

