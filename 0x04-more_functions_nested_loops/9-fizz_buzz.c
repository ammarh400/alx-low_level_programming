#include "main.h"
#include<unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}

/**
 *print - print digit
 *@n: number of digit
 *Return: void
 */

void print(int n)
{

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 *main - prints the numbers from 1 to 100
 *
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 != 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
	} else if (i % 5 == 0 && i % 3 != 0)
	{
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	} else if (i % 3 == 0 && i % 5 == 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	} else
	{
	print(i);
	}
	if (i < 100)
	{
		_putchar(' ');
	}
	}
	_putchar('\n');
	return (0);
}
