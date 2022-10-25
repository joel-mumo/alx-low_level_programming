#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the destination
 * @src: the source
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
