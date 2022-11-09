#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid created by alloc_grid
 * @grid: width of grid
 * @height: height of grid
 * Return: freed grid
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
