#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - print variable arguments
 *@separator: poiner to constant char
 *@n: number of variable arguments
 *
 *Return: Nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;


	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if ((i != n - 1) && separator != NULL)
		printf("%s", separator);
	}

	va_end(ptr);

	printf("\n");
}
