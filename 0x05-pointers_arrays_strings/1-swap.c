#include<stdio.h>
#include"main.h"

/**
 *swap_int - swap to integers
 *@a: int variable to swap
 *@b: int variable to swap
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
