#include<stdio.h>
#include"main.h"

/**
 *_strchr - find the character
 *@s: pointer to char
 *@c: char to find
 *Return: 0
 */

char *_strchr(char *s, char c)
{

	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
