#include "main.h"
#include <stdlib.h>

/*
 * This function creates an array of integers
 */

/**
 * array_range - Function creates an array of integers
 * @min: First value of array
 * @max: Last value of array
 * Return: arr (Success)
*/

int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; j <= max; i++, j++)
	{
		arr[i] = j;
	}

	return (arr);
}
