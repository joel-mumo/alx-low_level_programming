#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of  / to be printed
 */
void print_diagonal(int n)
{
	int d, g;

	if (n <= 0)
		_putchar('\n');

	for (d = 0; d < n; d++)
	{
		for (g = 0; g < d; g++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
