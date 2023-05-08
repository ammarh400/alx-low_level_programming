#include <string.h>
#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: file to append a text in it
 *@text_content: string to add at the end of the file
 *
 *Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w =  write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
