#include "main.h"
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * create_file - Function creates a file
 * @filename: Pointer to the file
 * @text_content: Pointer to string to be add to the end of the file
 * Return: 1 Success || -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	len = strlen(text_content);
	bytes_written = write(fd, text_content, len);

	if (bytes_written == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
