#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 *init_dog - initialize a dog's info
 *@d: pointer to sturcture dog
 *@name: name of the dog
 *@age: dog's age
 *@owner: owner of the dog
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
