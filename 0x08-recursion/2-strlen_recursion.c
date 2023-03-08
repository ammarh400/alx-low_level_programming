#include<stdio.h>
#include"main.h"

/**
 *_strlen_recursion - find length of a string
 *
 *@s: pointer to char
 *Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	unsigned long int n = 0;

	if (*s)
	{
		i++;
		n = _strlen_recursion(++s);
	}

	return (i + n);

}
