#include<stdio.h>
#include<stdlib.h>

/**
 *main - print file name
 *@argc: number of arguments
 *@argv: array of pointer to char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}

	return (0);
}
