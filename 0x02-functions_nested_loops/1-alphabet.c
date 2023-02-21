#include<stdio.h>
#include"main.h"

/**
 *print_alphabet - print alphabet
 *
 *Return: void
 */

void print_alphabet(void)
{

	char ch = '0';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);

	}
	_putchar('\n');
}
