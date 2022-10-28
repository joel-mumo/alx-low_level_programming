#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of characters to be copied
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (j < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
