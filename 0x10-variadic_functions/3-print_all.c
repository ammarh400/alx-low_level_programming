#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - print all
 *@format: constant pointer to constant char
 *
 *Return: Nothing
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ptr;
	char *s = "";
	char *str;

	va_start(ptr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (!str)
						str = "(nil)";

					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			s = ", ";
		}
	}
	printf("\n");
	va_end(ptr);
}
