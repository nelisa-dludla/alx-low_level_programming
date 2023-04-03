#include "main.h"
#include <stdio.h>

/*
 * This function prints the sum of two diagonals of a square
 * matrix of integers
 */

/**
 * print_diagsums - Function prints of two diagonals
 * @a: Pointer paramter of an array
 * @size: Size of the matrix
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int diag_sum1, diag_sum2, i;

	diag_sum1 = 0;
	diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum1 = diag_sum1 + a[i * size + i];
		diag_sum2 = diag_sum2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diag_sum1, diag_sum2);
}
