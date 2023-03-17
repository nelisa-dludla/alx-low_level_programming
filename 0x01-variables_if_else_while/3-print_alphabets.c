#include <stdio.h>

/*
 * This program prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 */

/**
 * main - Entry point
 * while - loops and prints the alphabet from a - z then A - Z
 * putchar - adds a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char small_letter, big_letter;

	small_letter = 'a';
	big_letter = 'A';

	while (small_letter <= 'z')
	{
		putchar(small_letter);
		small_letter++;
	}

	while (big_letter <= 'Z')
	{
		putchar(big_letter);
		big_letter++;
	}

	putchar('\n');

	return (0);
}
