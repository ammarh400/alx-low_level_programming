#include<stdio.h>
#include"main.h"

/**
 *_strncpy - copy string 1 to string 2
 *@dest: pointer to char
 *@src: pointer to char
 *@n: num
 *Return: pointer to char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;
	int len1 = 0, len2 = 0;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{}

	if (n >= len2)
	{
		for (i = 0; i < len2; i++)
		{
			dest[i] = src[j++];
		}
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[j++];
		}
	}
	return (dest);
}
