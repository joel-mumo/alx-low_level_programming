#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: A pointer
 * @old_size: Old size
 * @new_size: New size
 * Return: A pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *realloc;
	unsigned int j;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		free(ptr);
		return (0);
	}

	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);

	for (j = 0; j < (old_size || j < new_size); j++)
	{
		*(realloc + j) = clone[j];
	}
	free(ptr);
	return (realloc);
}
