#include "main.h"
#include <stdio.h>

/**
 *clear_bit - clear a sepicfic bit in a number
 *
 *@n: number to clear a specific bit in it
 *@index: index of the bit to clear
 *Return: 1 if success -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}

