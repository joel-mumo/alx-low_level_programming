#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list varlist;
	unsigned int i = 0, j, g = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(varlist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && g)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(varlist, int)), g = 1;
				break;
			case 'i':
				printf("%d", va_arg(varlist, int)), g = 1;
				break;
			case 'f':
				printf("%f", va_arg(varlist, int)), g = 1;
				break;
			case 's':
				str = va_arg(varlist, char *), g = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(varlist);
}
