#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates for a 2D array
 * @width: width of array
 * @height: height of array
 *
 * Return: 2D array of dimensions width * height
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (!width || !height)
		return (0);

	grid = malloc(height * sizeof(int *));
	if (!grid)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			for (i--; i >= 0; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
