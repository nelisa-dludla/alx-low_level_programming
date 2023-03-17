#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * This program will assign a random number to the variable n
 * each time it is executed
 */

/**
 * main - Entry point
 * if - specifies the conditions for printing n and last_digit
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	int last_digit;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	else
	{
		printf("%d and is 0\n", last_digit);
	}

	return (0);
}
