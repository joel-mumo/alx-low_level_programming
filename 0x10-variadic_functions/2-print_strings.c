#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int j;
	char *str;

	va_start(varlist, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(varlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(varlist);
}
