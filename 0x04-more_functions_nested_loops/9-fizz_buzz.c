#include <stdio.h>

/*
 * This program prints the numbers from 1 - 100, followed by a new line
 * multiples of 3 will be replaced with 'Fizz', multiples of 5 with 'Buzz
 * and multiples of both with FizzBuzz
 */

/**
 * main - Entry point
 * num -  will print a number OR Fizz OR Buzz OR FizzBuzz
 *
 * for loop - prints the numbers as while as the placed words for
 * certain numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	printf("1");

	for (num = 2; num <= 100; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", num);
		}
	}

	printf("\n");

	return (0);
}
