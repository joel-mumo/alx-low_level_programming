#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: The array
 * @n: The number of elements in the array
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n - 1)
			printf(", ");
	}

	printf("\n");
}
