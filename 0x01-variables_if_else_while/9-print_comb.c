#include<stdio.h>

/**
 *main - combination of single digit
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int ch = 48;

	for (ch = 48 ; ch < 58 ; ch++)
	{
		putchar(ch);

		if (ch < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
