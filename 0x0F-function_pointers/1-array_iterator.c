#include<stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - fuction
 *@array: pointer to int
 *@size: size of the array
 *@action: pointer to function that takes an int and return nothing
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
