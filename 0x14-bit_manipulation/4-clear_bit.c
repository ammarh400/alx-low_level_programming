#include "main.h"

/**
 *clear_bit - clear bit
 *@n: pointer to num
 *@index: index
 *Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((~(1 << index)) & *n);

	return (1);
}
