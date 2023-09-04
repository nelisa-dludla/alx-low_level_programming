#include "main.h"

/**
 * closeFile - This function closes the file and
 * if, necessary prints an error message
 * @fd: File descriptor
 */

void closeFile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry Point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fdFrom, fdTo;
	char content[1024];
	ssize_t bytesRead, bytesWritten;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (access(argv[2], F_OK) == 0)
	{
		fdTo = open(argv[2], O_WRONLY | O_TRUNC);
	}
	else
	{
		fdTo = open(argv[2], O_WRONLY | O_CREAT, 0600);
	}
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[3]);
		exit(99);
	}
	while ((bytesRead = read(fdFrom, content, sizeof(content))) > 0)
	{
		bytesWritten = write(fdTo, content, sizeof(content));
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[3]);
			exit(99);
		}
	}
	closeFile(fdFrom);
	closeFile(fdTo);
	return (0);
}
