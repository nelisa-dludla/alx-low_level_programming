#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * This function adds positive numbers, prints the result,
 * followed by a new line
 */

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum, num;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + num;
	}

	printf("%d\n", sum);

	return (0);
}
