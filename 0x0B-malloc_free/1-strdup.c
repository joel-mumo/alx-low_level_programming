#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strln - count array
 * @s: An array of elements
 * Return: 1 on success
 */
int _strln(char *s)
{
	unsigned int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * _strcpy - Copies an array
 * @src: Source array
 * @dest: Destination array
 * Return: dest
 */
char *_strcpy(char *src, char *dest)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: An array
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int size;

	if (*str == 0)
	{
		return (NULL);
	}

	size = _strln(str) + 1;
	d = (char *) malloc(size * sizeof(char));
	if (d == 0)
	{
		return (NULL);
	}
	_strcpy(d, str);
	return (d);
}
