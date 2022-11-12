#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 * Return: length of the string s
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
