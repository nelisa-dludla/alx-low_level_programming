#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * copy_file - Copies the contents of a source file to a destination file
 * @src: The source file
 * @dest: The destination file
 */

void copy_file(const char *src, const char *dest)
{
	FILE *src_file, *dest_file;
	char buffer[1024];
	size_t bytes_written, bytes_read;

	/* Open source file */
	src_file = fopen(src, "r");
	if (src_file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	/* Open destination file */
	dest_file = fopen(dest, "w");
	if (dest_file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
		exit(99);
	}

	/* Copy content from source to destination file */
	while ((bytes_read = fread(buffer, 1, 1024, src_file)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, dest_file);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
		}
	}

	/* Close opened files */
	if (fclose(src_file) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(src_file));
		exit(100);
	}

	if (fclose(dest_file) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(dest_file));
		exit(100);
	}
	/* Set permissions */
	chmod(dest, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Number of argument vectors
 * Return: 0 (Success) || Error specific error codes
 */

int main(int argc, char **argv)
{

	/* Check the number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
