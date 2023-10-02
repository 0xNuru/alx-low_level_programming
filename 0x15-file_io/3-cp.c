#include "main.h"

void error_and_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}


/**
* main - a program that copies the content of a file to another file
* @argc: arguments count
* @argv: array of args
*
* Return: success (0)
*/

int main(int argc, char *argv[])
{
	int fd1, fd2, BYTES = 1024, bytes_read = 1024, bytes_written;
	char buffer[1024];

	if (argc != 3)
		error_and_exit(97, "Usage: cp file_from file_to");
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (bytes_read == BYTES)
	{
		bytes_read = read(fd1, buffer, BYTES);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
		if (close(fd1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
		if (close(fd2) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
		return (0);
}
