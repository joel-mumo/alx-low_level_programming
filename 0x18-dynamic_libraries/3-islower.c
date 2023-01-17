#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character
 * Return: 1 if character is lower case and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
