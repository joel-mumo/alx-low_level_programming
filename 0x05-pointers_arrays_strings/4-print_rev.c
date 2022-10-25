#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int z = 0;

	while (s[z] != '\0')
		z++;
	for (z = z - 1; z >= 0; z--)
		_putchar(s[z]);

	_putchar('\n');
}
