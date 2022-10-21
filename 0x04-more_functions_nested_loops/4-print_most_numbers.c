#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 skipping 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x != 2 && x != 4)
			_putchar(x + '0');

		x++;
	}
	_putchar('\n');
}
