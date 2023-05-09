#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Function appends text at the end of a file
 * @filename: Pointer to the file
 * @text_content: Pointer to string to be add to the end of the file
 * Return: 1 (Success) || -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fptr = fopen(filename, "a");

	if (fptr == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, fptr) == EOF)
	{
		fclose(fptr);
		return (-1);
	}

	fclose(fptr);
	return (1);
}
