#include "main.h"

/**
 * _isupper - Checks if a character is upper
 * @c: Character text
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
