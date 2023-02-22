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
 *print_even_sum - print sum of even numbers
 *
 *Return: void
 */
void print_even_sum(void)
{
	unsigned long first = 1;
	unsigned long second = 1;
	unsigned long third;
	unsigned long sum = 0;
	int i;

	for (i = 2; third  < 4000000; i++)
	{
		third = first + second;
		first = second;
		second = third;


		if (third % 2 == 0)
		{
			sum += third;
		}
	}
	print(sum);
	_putchar('\n');
}

/**
 *main - main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_even_sum();
	return (0);
}
