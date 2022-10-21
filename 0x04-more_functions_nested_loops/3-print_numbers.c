#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int j = 0;

	while (j < 10)
		_putchar(j++ + '0');

	_putchar('\n');
}
