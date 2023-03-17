#include <stdio.h>

/*
 * This program prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 */

/**
 * main - Entry point
 * while - loops through the single digit base numbers
 * printf - prints the single digit base numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int base_number;

	for (base_number = 0; base_number < 10; base_number++)
	{
		printf("%d", base_number);
	}

	printf("\n");

	return (0);
}
