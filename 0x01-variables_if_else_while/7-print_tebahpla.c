#include <stdio.h>

/*
 * This program prints the lowercase alphabet in
 * reverse, followed by a new line
 */

/**
 * main - Entry point
 * for - loops and prints the alphabet from z - a
 * putchar - adds a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
