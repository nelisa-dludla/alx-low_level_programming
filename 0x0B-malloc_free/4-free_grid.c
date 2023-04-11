#include "main.h"
#include <stdlib.h>

/*
 * This function frees a 3D grid previously created by my
 * alloc_grid function
 */

/**
 * free_grid - Function frees allocated memory of a 3D grid
 * @grid: Pointer parameter of an interger pointer
 * @height: Pointer paramter of an integer
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
