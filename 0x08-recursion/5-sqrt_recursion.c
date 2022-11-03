#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @x: integer 1
 * @y: integer 2
 * Return: natural square root, else -1
 */
int _sqrt_recursion(int x, int y)
{
	if  (y == 1 || y == 0)
	{
		return (1);
	}
	else if (x * x < y)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}
