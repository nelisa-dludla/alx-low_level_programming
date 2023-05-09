#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * print_usage_error - Function prints a usage error message
 */
void print_usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * print_read_error - Function prints a read error message
 * @filename: Pointer to file
 */
void print_read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * print_write_error - Function prints a write error message
 * @filename: Pointer to file
 */
void print_write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * print_close_error - Function prints a close error message
 * @fd: File descriptor
 */
void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Number of argument vectors
 * Return: 0 (Success) || Error specific error codes
 */
int main(int argc, char **argv)
{
	int src_fd, dest_fd, bytes_read, bytes_written;
	char buffer[1024];

	/* Check the number of arguments */
	if (argc != 3)
		print_usage_error();

	/* Open source file */
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		print_read_error(argv[1]);

	/* Open destination file */
	dest_fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (dest_fd == -1)
		print_write_error(argv[2]);

	/* Copy content from source to destination file */
	while ((bytes_read = read(src_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written != bytes_read)
			print_write_error(argv[2]);
	}

	/* Close opened files */
	if (close(src_fd) == -1)
		print_close_error(src_fd);

	if (close(dest_fd) == -1)
		print_close_error(dest_fd);

	/* Set permissions */
	chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	return (0);
}
