#include "3-calc.h"

/**
 * main - the main function that prints the result
 * @argc: the size of the array
 * @argv: the array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;
	char *operator;
	int (*calcul)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calcul = get_op_func(operator);
	if (calcul == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = calcul(num1, num2);
	printf("%d\n", calc);

	return (0);
}
