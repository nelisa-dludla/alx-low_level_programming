#include "main.h"

/*
 * This function reverses the content of an array of integers
 */

/**
 * reverse_array - Function reverses the content of an array
 * @a: Pointer parameter
 * @n: Number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
