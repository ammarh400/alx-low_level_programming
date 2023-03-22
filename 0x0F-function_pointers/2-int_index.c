#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: pointer to int
 *@size: size of the array
 *@cmp: pointer to function that takes an int and return an int
 *Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

