#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *print_last_digit - print the last digit of the number
 *@n: last digit of number
 *Return: last digit
 */

int print_last_digit(int n)
{
	n = abs(n % 10);
	_putchar(n + '0');

	return (n);
}
