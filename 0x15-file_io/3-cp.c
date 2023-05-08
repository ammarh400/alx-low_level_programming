#include "main.h"
#include <stdlib.h>

void close_file(int fd);

/**
 *close_file - Closes file descriptors
 *@fd: The file descriptor
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 *main - Copies the contents of a file to another file
 *@argc: The number of arguments supplied to the program
 *@argv: An array of pointers to the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	fd_1 = open(argv[1], O_RDONLY);
	r = read(fd_1, buffer, 1024);
	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(fd_2, buffer, r);
		if (fd_2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(fd_1, buffer, 1024);
		fd_2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(fd_1);
	close_file(fd_2);

	return (0);
}

