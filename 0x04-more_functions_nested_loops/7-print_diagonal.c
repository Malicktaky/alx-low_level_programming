#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (j = 1; i <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i == j)
				{
					for (k = 1; k <= j - 1; k++)
						_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
