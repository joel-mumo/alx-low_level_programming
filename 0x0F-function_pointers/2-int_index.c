#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array to search
 * @size: The array size
 * @cmp: a pointer to the function to be used
 * Return: returns the index of the first element
 * for which the cmp function does not return 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
