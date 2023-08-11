#include "main.h"
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elemts
 * @size: th size of elsments
 *
 * Return: a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);

	return (tab);
}
