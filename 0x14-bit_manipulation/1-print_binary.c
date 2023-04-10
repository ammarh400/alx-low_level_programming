#include "main.h"

/**
 *print_binary - print binary
 *
 *@n : unsigned long int
 *Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int num = n;

	if (num == 0)
	{
		printf("0");
		return;
	}

	while (num)
	{
		num = num >> 1;
		i++;
	}


	for (i--; i >= 0; i--)
	{
		if (n & (1 << i))
			printf("1");

		else
			printf("0");
	}
}
