#include <stdio.h>

/*
 * This program prints all the possible different
 * combinations of two digits
 */

/**
 * main - Entry point
 * for - loops to print the first and second numbers
 * if - loops to make sure the numbers are seperated by  ", "
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);

			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
