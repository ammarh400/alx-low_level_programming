
#include"main.h"

/**
 *print - print digit
 *@n: number of digit
 *Return: void
 */

void print(unsigned long n)
{

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * print_fabonicci - print series of fabonicci
 * @n: number to print
 * Return: void
 */
void print_fabonicci(int n)
{
	unsigned long first = 1;
	unsigned long second = 1;
	unsigned long third;
	int i;

	print(second);
	_putchar(',');
	_putchar(' ');

	for (i = 2; i <= n; i++)
	{
		third = first + second;
		first = second;
		second = third;
		print(third);
		if (i < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 *main - main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_fabonicci(98);
	return (0);
}
