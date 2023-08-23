#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @ac: the size of the array
 * @argv: the array of the arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	int mul = 0;
	int num1, num2;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
