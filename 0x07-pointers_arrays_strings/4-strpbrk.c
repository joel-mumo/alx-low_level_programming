#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string we check
 * @accept: comparison string
 * Return: a pointer to the byte in @s
 */
char *_strpbrk(char *s, char *accept)
{
	char r, *w;

	for (r = *s; r != 0; s++, r = *s)
	{
		for (w = accept; *w != 0; w++)
		{
			if (r == *w)
			{
				return (s);
			}
		}
	}
	return (0);
}
