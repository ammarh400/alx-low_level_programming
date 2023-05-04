#include "main.h"
#include <stdio.h>

/**
 *get_bit - get bit from an unsigned long int number
 *
 *@n: number to get bit from
 *@index: bit index
 *Return: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = n >> index & 1;
	return (i);
}
