#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: the struct to initialize
 * @name: the name to add
 * @age: the age to add
 * @owner: the owner to add
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
