#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: NULL if the function fails or a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(name) + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(owner) + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';

	return (n_dog);
}
