#include<stdio.h>
#include"main.h"

/**
 *_atoi - converts a string to int
 *@str: pointer to char
 *Return: int
 */


int _atoi(char *str)
{
	unsigned int n = 0;
	int  i = 0, sign_count = 0;
	int flag = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 48 && str[i] <= 58)
		{
			n = (n * 10) + (str[i] - '0');
			flag = 1;
		}
		else if (flag == 1)
		{
			break;
		}
		if (str[i] == '-')
		{
		sign_count++;
		}
	}
	if (sign_count % 2 != 0)
	{
		return (-1 * n);
	}
	if (flag == 0)
	{
		return (0);
	}
	return (n);
}
