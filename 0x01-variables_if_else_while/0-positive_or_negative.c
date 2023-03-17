#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* This program will print a random number and say whether it is - or + */

/**
 * main - Entry point
 * if - Specifies the conditions for printing "n"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
