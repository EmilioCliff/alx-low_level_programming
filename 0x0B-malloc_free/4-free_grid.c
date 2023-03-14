#include "main.h"
/**
 * free_grid - frees a 2D grid
 *
 * @height: height of the 2D array
 * @grid: a pointer to the 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
