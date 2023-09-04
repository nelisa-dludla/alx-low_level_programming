#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: Name of the file
 * @text_content: A NULL terminated string
 * Return: 1 (Success) | -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_CREAT | 0600);
	}

	if (fd == -1)
	{
		return (-1);
	}

	bytesWritten = write(fd, text_content, strlen(text_content));

	if (bytesWritten == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
