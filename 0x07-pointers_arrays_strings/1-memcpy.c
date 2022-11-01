#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: A pointer to memory area to copy src into
 * @src: The source to copy from
 * @n: The number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
