#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
