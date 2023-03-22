#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"

/**
 *print_name - print name
 *
 *@name: pointer to char
 *@f: pointer to function that takes pointer to char and return nothing
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}

