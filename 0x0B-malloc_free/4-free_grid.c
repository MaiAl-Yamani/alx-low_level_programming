#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid previously created by alloc_grid function
 * @grid: pointer to pointer to int
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = height; h >= 0; h--)
	{
		free(grid[h]);
	}
	free(grid);
}
