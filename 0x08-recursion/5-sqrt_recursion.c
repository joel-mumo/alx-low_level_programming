#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 * @x: integer 1
 * @y: integer 2
 * Return: square root
 */
int _sqrt(int x, int y)
{
	if  (y == 1 || y == 0)
	{
		return (y);
	}
	else if (x * x < y)
	{
		return (_sqrt(x + 1, y));
	}
	else if (x * x == y)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: An integer
 * Return: square root, else -1
 */
int _sqrt_recursion(int n)
{
	int z = 0;

	if (z < 0)
		return (-1);
	else
		return (_sqrt(z, n));
}
