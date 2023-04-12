#include "main.h"

/**
 *get_endianness - get endianness
 *
 *
 *Return: int
 */

int get_endianness(void)
{

	unsigned int n = 1;
	char *ptr = (char *)&n;

	return (*ptr);
}
