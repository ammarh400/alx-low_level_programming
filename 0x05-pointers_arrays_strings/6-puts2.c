#include<stdio.h>
#include"main.h"

/**
 *puts2 - prints every other character of a string
 *@str: pointer to char
 *Return: void
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	for (len = 0; str[len] != '\0'; len++)
	{}

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
