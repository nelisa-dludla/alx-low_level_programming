#include "main.h"
#include <stdio.h>

/*
 * This function prints all natural numbers from n to 98,
 * followed by a new line
 */

/**
 * print_to_98 - Function prints natural number from n to 98
 * @n: Starting number
 *
 * Return: Void
 */

void print_to_98(int n)
{
	int num;

	if (n < 0) /* This is looking for when n < 0 */
	{
		for (num = n; num <= 98; num++)
		{
			if (num == 98)
				printf("%d\n", num);
			else
				printf("%d, ", num);
		}
	}
	else if (n >= 98) /* This is looking for when n > 98 */
	{
		for (num = n; num >= 98; num--)
		{
			if (num == 98)
				printf("%d\n", num);
			else
				printf("%d, ", num);
		}
	}
	else if (n >= 0) /* This is looking for when n is >= 0 */
	{
		for (num = n; num <= 98; num++)
		{
			if (num == 98)
				printf("%d\n", num);
			else
				printf("%d, ", num);
		}
	}
}
