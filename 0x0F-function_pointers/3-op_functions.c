#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
