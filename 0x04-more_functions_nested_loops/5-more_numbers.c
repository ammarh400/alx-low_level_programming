#include<stdio.h>
#include"main.h"

/**
 *print - print digit
 *@n: number of digit
 *Return: void
 */

void print(int n)
{

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}


/**
 *more_numbers - print 10 times numbers from 0 to 14
 *
 *Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i  < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			print(j);
		}
		_putchar('\n');
	}
}


