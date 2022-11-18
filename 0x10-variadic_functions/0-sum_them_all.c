#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varlist;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(varlist, n);

	for (j = 0; j < n; j++)
		sum += va_arg(varlist, int);
	va_end(varlist);
	return (sum);
}
