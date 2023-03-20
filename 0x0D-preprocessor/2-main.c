#include<unistd.h>


/**
 *main - print file name
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char *s = __FILE__;
	char c = '\n';

	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, &c, 1);


	return (0);
}
