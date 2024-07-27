#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees created grid
 * @grid: grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	if (grid && height)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
