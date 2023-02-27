#include<stdio.h>
#include"main.h"

/**
 *rev_string - function to reverse a string
 *@s: pointer to char
 *Return: void
 */

void rev_string(char *s)
{
	int i, j = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{}

	while (j < i)
	{
		temp = s[--i];
		s[i] = s[j];
		s[j++] = temp;
	}
}
