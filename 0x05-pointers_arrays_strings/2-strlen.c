#include<stdio.h>
#include"main.h"

/**
 *_strlen - get the length of a string
 *@s: pointer to char
 *Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	return (i);
}

