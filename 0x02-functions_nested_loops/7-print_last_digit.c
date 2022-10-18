#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @y: the number
 * Return: the last digit of the number
 */
int print_last_digit(int y)
{
	int dig = y % 10;

	if (dig < 0)
		dig *= -1;

	_putchar(dig + '0');

	return (dig);
}
