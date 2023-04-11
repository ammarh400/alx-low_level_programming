#include "main.h"

/**
 *set_bit - set bit
 *
 *@n: pointer to number
 *@index: index
 *Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}


