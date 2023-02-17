#include<stdio.h>

/**
 *main - combination of single digit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 99 ; i++)
	{
		for (j = i + 1 ; j <= 99; j++)
		{

			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(32);
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		if (i < 98)
		{
			putchar(44);
			putchar(32);
		}
		}
	}


	putchar('\n');
	return (0);
}
