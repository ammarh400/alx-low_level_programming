#include<stdio.h>
#include<stdlib.h>

/**
 *main - print function argument
 *@argc: number of arguments
 *@argv: array of pointer to char
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);


	return (0);
}

