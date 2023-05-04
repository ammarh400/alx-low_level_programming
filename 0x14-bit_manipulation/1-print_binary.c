#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_binary - print binary number
 *
 *@n: number to be printed in binary
 *Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i;
	int j = 1;
	unsigned int flag = 0;
	unsigned long int num;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = 63; i >= 0; --i)
	{
		if (n & (1 << i))
		{
			printf("1");
			flag = 1;
		}

		else if ((!(n & (1 << i))) && flag == 1)
			printf("0");

		if (flag == 1)
		{
			num = n >> j;
			j++;
			if (num == 0)
				break;
		}
	}
}
