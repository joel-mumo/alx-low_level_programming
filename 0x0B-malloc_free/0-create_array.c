#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The number of elements in the array
 * @c: The char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int pos;

	if (size == 0)
	{
		return (NULL);
	}

	buff = (char *) malloc(size * sizeof(c));

	if (buff == 0)
	{
		return (NULL);
	}
	else
	{
		pos = 0;
		while (pos < size)
		{
			*(buff + pos) = c;
			pos++;
		}
		return (buff);
	}
}
