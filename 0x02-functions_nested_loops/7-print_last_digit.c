#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: The argument to enter
 *
 * Return: 0 if n is zero, r if r > 0 or < 0
 */
int print_last_digit(int n)
{
	int r;

	if (n > 0)
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
	else if (n < 0)
	{
		r = -(n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
