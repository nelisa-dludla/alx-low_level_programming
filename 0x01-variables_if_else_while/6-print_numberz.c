#include <stdio.h>

/*
 * This program prints all the single digits of base 10
 * starting from 0, followed by a new line
 */

/**
 * main - Entry point
 * while - loops and prints through the single digit base 10 numbers
 * putchar - adds a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int base_number;

	for (base_number = 48; base_number < 58; base_number++)
	{
		putchar(base_number);
	}

	putchar('\n');

	return (0);
}
