#include<stdio.h>
#include"main.h"

/**
 *set_string - set pointer
 *@s: pointer to pointer char
 *@to: pointer to char
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

