#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)\n");

	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
