#include <stdlib.h>
#include "main.h"

/**
 *read_textfile - function to read text file
 *and print it to the POSIX standard output
 *@filename: text file that will be read
 *@letters: number of letters that should be read or print
 *Return: actual number of letters that has been readed and printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t r;
	ssize_t w;
	char *buff;

	if (filename ==	 NULL)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (w);
}
