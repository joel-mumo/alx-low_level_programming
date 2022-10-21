#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, l;

		for (k = 0; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
