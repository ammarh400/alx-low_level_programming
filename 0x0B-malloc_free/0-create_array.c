#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 *create_array - create an array with a specific char
 *@size: size of the array
 *@c: specific char
 *Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i++] = c;
	}

	return (ptr);
}
