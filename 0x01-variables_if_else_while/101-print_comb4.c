#include <stdio.h>

/*
 * This program will print all the different possible
 * combinations of three digits,
 * 012, 120, 102, 021, 021, 201, 210 are considered
 * the same combination of three digits 0, 1 and 2
 * numbers will be seperated by ',' and a space
 */

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
