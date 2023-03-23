#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum of all arguments to the variadic funcion
 *@n: no of variable arguments
 *
 *
 *Return: int
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
