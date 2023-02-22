#include"main.h"

/**
 *print - print digit
 *@n: number of digit
 *Return: void
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}
/**
 *multiple_of_3_5 - calculate sum of n
 *@n: number to print below it
 *Return: void
 */

void multiple_of_3_5(int n)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	print(sum);
	_putchar('\n');
}

/**
 *main - main function
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	multiple_of_3_5(1024);
	return (0);
}
