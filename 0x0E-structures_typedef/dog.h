#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog's info
 *@name: dog's name
 *@age: dog's age
 *@owner: name of the owner
 *Description: structure
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
