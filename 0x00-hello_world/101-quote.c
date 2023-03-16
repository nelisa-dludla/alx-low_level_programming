#include <stdio.h>
#include <unistd.h>

/* This program prints a string of characters as an error */

/**
 * main - Entry point
 * fput - writes string of characters
 * Return: 1 (Success)
 */

int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
