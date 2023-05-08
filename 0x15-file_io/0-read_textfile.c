#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * read_textfile - Function reads a text file and prints it to the POSIX
 * standard output
 *
 * @filename: Pointer to the file to be read
 *
 * @letters: Number of letters to be read and print
 *
 * Return: Number of actual letter read and printed (letters_written)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buffer;
	ssize_t letters_read, letters_written;


	if (filename == NULL)
	{
		return (0);
	}


	fptr = fopen(filename, "r");

	if (fptr == NULL)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fptr);
		return (0);
	}
	letters_read = fread(buffer, 1, letters, fptr);
	if (ferror(fptr))
	{
		fclose(fptr);
		return (0);
	}

	letters_written = fwrite(buffer, 1, letters_read, stdout);
	if (ferror(stdout) || letters_written != letters_read)
	{
		fclose(fptr);
		return (0);
	}
	free(buffer);
	fclose(fptr);
	return (letters_written);
}
