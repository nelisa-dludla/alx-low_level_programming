#include <stdio.h>

/*
 * This program prints the alphabet in lowercase,
 * followed up a new line
 */

/**
 * main - Entry point
 * while - loops and prints letters a to z
 * putchar - adds a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
