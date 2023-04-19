#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include "function_pointers.h"
#include <stddef.h>

/*
 * This function executes a function given as a paramter
 * on each element of an array
 */

/**
 * array_iterator - Function executes a given function
 * @array: Pointer parament of an array
 * @size: Size
 * @action: Pointer parameter of a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#endif /* FUNCTION_POINTERS_H */
