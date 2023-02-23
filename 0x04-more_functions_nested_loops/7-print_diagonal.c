#include<stdio.h>
#include"main.h"

/**
 *print_diagonal - print (\) number of times
 *@n: number of times
 *Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				break;
			}
			_putchar(' ');
		}
		if (i < n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
