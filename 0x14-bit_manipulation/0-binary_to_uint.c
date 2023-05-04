#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *binary_to_uint - function to convert binary num to unsigend int
 *@b: binary string to be converted
 *
 *Return: converted num or 0
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int i;
	unsigned int converted_num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		converted_num = converted_num * 2 + (b[i] - '0');
	}
	return (converted_num);
}
