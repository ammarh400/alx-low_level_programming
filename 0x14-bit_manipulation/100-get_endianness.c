#include "main.h"
#include <stdio.h>

/**
 *get_endianness - check if little or big endiann
 *
 *Return: Nothing
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr;

	ptr = (char *)&x;

	return (*ptr);
}
