#include "main.h"

/**
 *get_bit - get bit
 *@n: number
 *@index: bit's index
 *Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
