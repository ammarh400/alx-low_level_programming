#include<stdio.h>
#include"main.h"

/**
 *_strncpy - function to concatenate n characters from string 2
 *@dest: pointer to char
 *@src: pointer to char
 *@n: number of character to concatenate
 *Return: pointer to char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;
	int total_len = 0, len1 = 0, len2 = 0;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{}

	total_len = len1 + len2;

	if (n >= len2)
	{
		for (i = len1; i < total_len; i++)
		{
			dest[i] = src[j++];
		}
		dest[i] = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[len1++] = src[j++];
		}
		dest[len1] = '\0';
	}
	return (dest);
}
