#include <stdio.h>
#include <string.h>

/**
 * main - prints the minimum number of coins
 * @ac: the size of the array of the arguments
 * @argv: the array of the arguments
 *
 * Return: 0 if success or 1 if the program is not exatly
 */
int main(int ac, char **argv)
{
	int cents = 0, coins = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents != 0)
	{
		while (cents >= 25)
		{
			cents = cents - 25;
			coins++;
		}
		while (cents >= 10 && cents < 25)
		{
			cents = cents - 10;
			coins++;
		}
		while (cents >= 5 && cents < 10)
		{
			cents = cents - 5;
			coins++;
		}
		while (cents >= 2 && cents < 5)
		{
			cents = cents - 2;
			coins++;
		}
		if (cents == 1)
		{
			cents = cents - 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
