#include<stdio.h>
#include"main.h"

/**
 *_strcat - function to concatenate two strings
 *@dest: pointer to char
 *@src: pointer to char
 *Return: pointer to char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0, total_len = 0;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{}

	total_len = len1 + len2;

	for (i = len1; i < total_len; i++)
	{
		dest[i] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

