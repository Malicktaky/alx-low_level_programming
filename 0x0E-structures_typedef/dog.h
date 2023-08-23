#ifndef __DOG_H__
#define __DOG_H__

#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - Struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the owner
 *
 * Description: This is a struct of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
