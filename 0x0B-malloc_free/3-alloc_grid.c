#include "main.h"

/**
 * alloc_grid - create 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 * Null if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j, l = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (; l < i; l++)
				free(tab[l]);
			free(tab);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
