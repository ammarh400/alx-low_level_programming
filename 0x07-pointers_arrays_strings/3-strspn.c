#include<stdio.h>
#include"main.h"

/**
 *_strspn - find length
 *@s: pointer to char
 *@accept : pointer to char
 *Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (count);
			}
		}
	}

	return (count);
}
