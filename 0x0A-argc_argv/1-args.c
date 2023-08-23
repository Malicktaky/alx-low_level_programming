#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @ac: the size of the array
 * @argv: the array of the argument
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	(void)argv;

	printf("%d\n", ac - 1);
	return (0);
}
