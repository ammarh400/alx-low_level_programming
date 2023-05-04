#include "main.h"
#include <stdio.h>

/**
 *flip_bits - function to return number of bits needed to flipped to make n = m
 *@n: number 1
 *@m: number 2
 *Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;
	int i;

	for (i = 0; i <= 63; i++)
	{
		if ((x >> i) & 1)
			count++;
	}

	return (count);
}


