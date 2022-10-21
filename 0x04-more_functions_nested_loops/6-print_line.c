#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times _ should be printed
 */
void print_line(int n)
{
	int ln;

	if (n > 0)
	{
		for (ln = 0; ln <= n; ln++)
			_putchar('_');
	}

	_putchar('\n');
}
