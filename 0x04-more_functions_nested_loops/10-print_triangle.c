#include<stdio.h>
#include"main.h"

/**
 *print_triangle - print triangle shape
 *
 *@size : size of the triangle
 *Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (j < i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if (i > 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
