#include <stdio.h>

/*
 * This program prints all possible combinations of single-digit numbers
 * numbers will be separated by ',' followed by a space
 */

/**
 * main - Entry point
 * for - loops and prints the single-digit numbers followed by ', '
 * putchar - adds a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
