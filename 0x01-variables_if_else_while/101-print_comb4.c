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
	int k = 48;

	for (i = 48 ; i < 58 ; i++)
	{

		for (j = i + 1 ; j < 58; j++)
		{
		for (k = j + 1 ; k < 58; k++)
		{
			putchar(i);
			putchar(j);
			putchar(k);
		if (i < 55)
		{
			putchar(44);
			putchar(32);
		}
		}
		}

	}
	putchar('\n');
	return (0);
}
