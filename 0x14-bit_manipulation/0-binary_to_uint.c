#include "main.h"
#include <string.h>

/**
 *binary_to_uint - binarty to unit
 *
 *@b: char
 *
 *Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i = 0;
	int sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			sum = sum + (1 << i);

		len--;
		i++;
	}

	return (sum);
}



