#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: the number of elements of the array
 * Return: Reverse
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
