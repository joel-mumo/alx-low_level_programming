#include "main.h"
#include <stddef.h>

/**
 * _strchr -  Locates a character in a string
 * @s: The string
 * @c: The character to be located
 * Return: a pointer to the first occurrence of @c
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
