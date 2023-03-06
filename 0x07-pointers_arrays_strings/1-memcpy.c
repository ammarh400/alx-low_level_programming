#include<stdio.h>
#include"main.h"

/**
 *_memcpy - copy string to another
 *@dest: pointer to char
 *@src: pointer to char
 *@n: number
 *Return: pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}

