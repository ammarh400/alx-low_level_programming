#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 *free_dog - free dog
 *
 *@d: pointer to dog_t
 *
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

