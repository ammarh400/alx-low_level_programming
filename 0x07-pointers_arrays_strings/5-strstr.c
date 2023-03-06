#include<stdio.h>
#include"main.h"

/**
 *_strstr - function to find pattern
 *@s: pointer to char
 *@accept: pointer to char
 *Return: pointer to char
 */

char *_strstr(char *s, char *accept)
{

	unsigned int count = 0;
	unsigned int i = 0, j = 0, len = 0;

	for (len = 0; accept[len] != '\0'; len++)
	{}

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i + count] == accept[j])
			{
				count++;
			}
		}
		if (count == len)
		{
		return (&s[i]);
		}
		else
		{
		count = 0;
		}
		i++;
	}

	return (0);
}
