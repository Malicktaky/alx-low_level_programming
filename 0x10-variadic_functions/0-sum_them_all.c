#include "variadic_functions.h"

/**
 * sum_them_all - add all its parameters.
 * @n: the number of parameters to print
 *
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
