#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int s, tri;

	if (size > 0)
	{
		for (s = 1; s <= size; s++)
		{
			for (tri = size - s; tri > 0; tri--)
				_putchar(' ');
			for (tri = 0; tri < s; tri++)
				_putchar('#');
			if (s == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
