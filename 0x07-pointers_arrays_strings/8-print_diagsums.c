#include<stdio.h>
#include"main.h"

/**
 *print_diagsums - print
 *@a: pointer to char
 *@size: size of array
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i * size + j];
			}
			if (i + j == size - 1)
			{
				sum2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
