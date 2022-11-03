#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number
 * Return:factorial on success,otherwise -1
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
