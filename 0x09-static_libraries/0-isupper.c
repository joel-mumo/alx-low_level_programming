#include "main.h"

/**
 * _isupper - uppercases letters
 * @c: string to check
 * Return: 1 on success else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

