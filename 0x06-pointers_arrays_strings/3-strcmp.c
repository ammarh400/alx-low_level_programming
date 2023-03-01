#include<stdio.h>
#include"main.h"

/**
 *_strcmp - compare two strings
 *@s1: pointer to char
 *@s2: pointer to char
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = s1[0] - s2[0];

	return (i);
}

