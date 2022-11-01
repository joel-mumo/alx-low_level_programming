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
	char *pn = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (pn);
}
