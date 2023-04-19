#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include "function_pointers.h"
#include <stddef.h>

/*
 * This function searches for an integer
 */

/**
 * int_index - Function searches for an integar
 * @array: Pointer paramter for an array
 * @size: Size of array
 * @cmp: Pointer parameter of a function
 * Return: cmp (Success) || -1 (Failure)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}

#endif /* FUNCTION_POINTERS_H */
