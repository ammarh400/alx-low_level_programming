#include "main.h"

/**
 * read_textfile- Read text file to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: number of bytes readed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	z = read(x, ptr, letters);
	y = write(STDOUT_FILENO, ptr, z);

	free(ptr);
	close(x);
	return (y);
}

