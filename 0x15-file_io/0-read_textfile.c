#include "main.h"

/**
 * read_textfile - This function reads a text file and prints it to
 * the POSIX standard output
 * @filename: Pointer to a file
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char content[1024];
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	while ((bytesRead = read(fd, content, letters)) > 0)
	{
		bytesWritten = write(STDOUT_FILENO, content, bytesRead);
		if (bytesWritten == -1)
		{
			close(fd);
			return (0);
		}
	}

	if (bytesRead == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return (bytesWritten);
}
