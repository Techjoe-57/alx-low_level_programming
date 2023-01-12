#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridpt;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridpt = malloc(height * sizeof(int *));
	if (gridpt == NULL)
	{
		free(gridpt);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridpt[i] = malloc(width * sizeof(int));
		if (gridpt[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridpt[i]);
			free(gridpt);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridpt[i][j] = 0;

	return (gridpt);
}
