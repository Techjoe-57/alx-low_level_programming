#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free 2 dimensional grids
 * created by alloc_grid function
 * @grid: multidimensional array of integers
 * @height: height of grid
 * Return: returns no value
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
