#include <stdio.h>

/*
 * This program prints all the numbers of base 16 in
 * lowercase, followed by a new line
 */

/**
 * main - Entry point
 * for - loops and prints all the base 16 numbers
 * putchar - adds a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int base_num1, base_num2;

	for (base_num1 = 48; base_num1 < 58; base_num1++)
	{
		putchar(base_num1);
	}

	for (base_num2 = 97; base_num2 < 103; base_num2++)
	{
		putchar(base_num2);
	}

	putchar('\n');

	return (0);
}
