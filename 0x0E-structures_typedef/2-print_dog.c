#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 *print_dog - prints dog's info
 *
 *@d: pointer to sturcture dog
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

