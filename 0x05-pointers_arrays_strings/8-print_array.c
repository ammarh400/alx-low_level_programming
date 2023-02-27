#include<stdio.h>
#include"main.h"

/**
 *print_array - print n element of an array
 *@a: pointer to int
 *@n: size of the array
 *Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
	else
	{
		printf("\n");
	}
}
