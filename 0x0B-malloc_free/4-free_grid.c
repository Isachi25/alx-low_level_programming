#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - frees 2d array
 *@grid: 2d grid
 *@height: height dimension of grid
 *Description: free memory of grid
 *Return: nothing
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
