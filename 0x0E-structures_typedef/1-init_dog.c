#include "dog.h"

/**
 * init_dog - using the received pointer to a struct, initializes the
 * struct's members
 * @d: struct to be initialized
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
