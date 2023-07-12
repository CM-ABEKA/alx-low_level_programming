#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory allocated by malloc
 * @grid: the grid
 * @height:...
 *
 * Return: ..
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
