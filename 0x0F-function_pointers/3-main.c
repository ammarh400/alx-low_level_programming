#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"

/**
 *main - main function
 *@argc: number of arguments
 *@argv: array of pointer to char
 *
 *
 *Return: int
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1;
	int n2;
	char *op;
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);


	f = get_op_func(op);

	if (f == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = f(n1, n2);
	printf("%d\n", result);

	return (0);
}
