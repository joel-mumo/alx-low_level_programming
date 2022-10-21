#include "main.h"

/**
 * _isdigit - checks whether a character is a digit
 * @c: The character to be checked
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	int i = 0;

	if (c >= '0' && c <= '9')
		i = 1;

	return (i);
}
