#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid().
 *
 * @grid: The 2D grid of integers to be freed.
 * @height: The height of the grid.
 *
 * Return: None.
 */


void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid);
if (grid[i] != NULL)
free(grid[i]);

free(grid);
}
