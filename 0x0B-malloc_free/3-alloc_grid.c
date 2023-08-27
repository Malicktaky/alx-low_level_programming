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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = (int **)malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		for (j = 0; j < height; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
