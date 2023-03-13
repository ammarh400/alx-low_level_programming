#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *_strdup - function to copy a string
 *@str: pointer to char
 *Return: pointer to char
 *
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{}

	ptr = malloc(sizeof(char) * (i + 1));

	i = 0;

	if (ptr == NULL)
		return (NULL);

	while (*str)
	{
		ptr[i++] = *str;
		str++;
	}
	ptr[i] = '\0';

	return (ptr);
}
