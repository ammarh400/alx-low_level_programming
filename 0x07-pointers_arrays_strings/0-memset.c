#include<stdio.h>
#include"main.h"

/**
 *_memset - fill the memory
 *@s: pointer to char
 *@b: char b
 *@n: number of
 *Return: pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
