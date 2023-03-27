#include "main.h"
#include <stdio.h>

/*
 * This function prints n elements of an array of integers,
 * followed by a new line
 * n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * Numbers to be displayed in the same order as they are stored in the array
 * printf is allowed
 */

/**
 * print_array - Function prints elements of an array
 * @a: name of array
 * @n: index inside array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}

	printf("\n");
}
