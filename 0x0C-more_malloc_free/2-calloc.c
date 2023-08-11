#include "main.h"

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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = 0;
	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		tab[i] = 0;
	return (tab);
}
