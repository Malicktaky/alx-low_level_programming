#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @ac: the size of the array
 * @argv: th array of argument
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	int i;

	for (i = 0; i < ac; i++)
		printf("%s\n", argv[i]);

	return (0);
}
