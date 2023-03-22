#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n: The argument to enter
 *
 * Return: n if n > or < 0 et 0 if n = 0
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (0);
}
