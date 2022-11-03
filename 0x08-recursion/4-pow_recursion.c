#include "main.h"

/**
 * _pow_recursion - return x ^ y
 * @x: first interger
 * @y: second integer
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(y - 1));
	}
	else
	{
		return (1);
	}
}
