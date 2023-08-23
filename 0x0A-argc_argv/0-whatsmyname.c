#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * @ac: the size of the array argv
 * @argv: the array of the argument
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	(void)ac;

	printf("%s\n", argv[0]);
	return (0);
}
