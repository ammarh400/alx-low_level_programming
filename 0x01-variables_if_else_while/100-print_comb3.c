#include<stdio.h>

/**
 *main - combination of single digit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j = 48;

	for (i = 48 ; i < 58 ; i++)
	{

		for (j = i + 1 ; j < 58; j++)
		{
			putchar(i);
			putchar(j);

			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
