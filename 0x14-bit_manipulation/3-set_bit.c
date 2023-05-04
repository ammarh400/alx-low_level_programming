#include "main.h"
#include <stdio.h>

/**
 *set_bit - set specific bit in a number
 *@n: pointer to the number to set bit
 *@index: index of bit
 *Return: number after modification
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
