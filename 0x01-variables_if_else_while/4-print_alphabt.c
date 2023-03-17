#include <stdio.h>

/*
 * This program prints the alphabet in lowercase,
 * except for the letters 'q' and 'e',
 * followed by a new line
 */

/**
 * main - Entry point
 * while - loops to help print the specified letters
 * putchar - adds the new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}

		letter++;
	}

	putchar('\n');

	return (0);
}
