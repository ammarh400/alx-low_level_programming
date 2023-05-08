#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *create_file - function to create a file
 *@filename: text file that will be create
 *@text_content: pointer to terminated null string to write in the file
 *
 *Return: 1 or -1
 */








int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}

