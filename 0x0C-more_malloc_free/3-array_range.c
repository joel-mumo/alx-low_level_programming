#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Minimum
 * @max: Maximum
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, j = 0, s = min;

	if (min > max)
		return (0);

	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
		return (0);

	while (j <= max - min)
		array[j++] = s++;

	return (array);
}
