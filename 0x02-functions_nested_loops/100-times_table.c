#include<stdio.h>
#include"main.h"


/**
*print - print digit
*@n: number of digit
*Return: void
*/

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
*print_times_table - table times
*@n: number to print
*Return: table times
*/

void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if ((i * j < 10)  && j != 0)
			{
				_putchar(' ');
			}
			if ((i * j < 100) && j != 0)
			{
				_putchar(' ');
			}
			print(i * j);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
