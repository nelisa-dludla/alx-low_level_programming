#include "main.h"
#include <stdlib.h>

/*
 * This function returns a pointer to a 2D array of integers
 */

/**
 * alloc_grid - Function returns a 2D array of integers
 * @width: Pointer parameter for integers
 * @height: Pointer parameter for integers
 * Return: grid (success) || NULL if height/width == 0
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
