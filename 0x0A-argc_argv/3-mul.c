#include <stdio.h>
#include <stdlib.h>

/*
 * This program prints the result of the multiplication of two numbers,
 * followed by a new line
 */

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success) || 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result;

		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		result = num1 * num2;

		printf("%d\n", result);
		return (0);
	}
}
