#include<stdio.h>
#include"main.h"

/**
 *_isalpha - check if alpha or not
 *@c: check the character to see if it's alpha
 *Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
