#include <stdio.h>

/*
 * This program prints the number of arguments passed into it
 */

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
