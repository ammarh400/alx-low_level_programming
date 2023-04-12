#include "main.h"

/**
 *flip_bits - no of flib bits
 *@n: n1
 *@m: n2
 *Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n1;
	unsigned long int n2;
	unsigned int count1 = 0;
	unsigned int count2 = 0;

	n1 = n & m;
	n2 = n | m;

	while (n1)
	{
		if (n1 & 1)
		{
			count1++;
		}
		n1 = n1 >> 1;
	}

	while (n2)
	{
		if (n2 & 1)
		{
			count2++;
		}
		n2 = n2 >> 1;
	}

	return (count2 - count1);
}

