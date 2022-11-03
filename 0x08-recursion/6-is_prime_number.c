#include "main.h"

/**
 * _prime - recursive function
 * @j: an integer
 * @itt: numbers to iterate
 * Return: 1on success, else 0
 */
int _prime(int j, int itt)
{
	if (itt == j - 1)
	{
		return (1);
	}
	else if (j % itt == 0)
	{
		return (0);
	}
	else if (j % itt != 0)
	{
		return (_prime(j, itt + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - Checks whether input is a prime number
 * @n: input
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	int itt;

	itt = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (_prime(n, itt));
	}
}
