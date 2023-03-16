#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"

/**
 *_calloc - allocate using calloc
 *@nmemb: no of arra member
 *@size: size of array
 *Return: pointer to void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
