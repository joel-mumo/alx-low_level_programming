#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: bytes for each position in the array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);

	for (j = 0; j < nmemb * size, j++)
		k[j] = 0;

	return (k);
}
