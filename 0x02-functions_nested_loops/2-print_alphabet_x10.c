#include"main.h"
#include<stdio.h>

/**
 *print_alphabet_x10 - print alphabet x10 times
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
		i++;
	}
}
