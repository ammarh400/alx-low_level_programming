#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *str_concat - function to concatenate to strings
 *@s2: pointer to char
 *@s1: pointer to char
 *Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;
	char *ptr;

	if (s1 != NULL)
	{
		for (; s1[len1] != '\0'; len1++)
		{}
	}
	if (s2 != NULL)
	{
		for (; s2[len2] != '\0'; len2++)
		{}
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			ptr[i++] = *s1;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			ptr[i++] = *s2;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

