#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string
 * Return: 1 (Sucess) | -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
