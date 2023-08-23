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
		printf("%s\n", d->name);
	else
		printf("(nil)\n");

	if (d->age != 0)
		printf("%f\n", d->age);
	else
		printf("(nil)\n");

	if (d->owner != NULL)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
