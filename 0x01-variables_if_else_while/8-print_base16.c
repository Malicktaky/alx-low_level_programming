#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;
	char number_al = 'a';

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}
	while (number_al <= 'f')
	{
		putchar(number_al + 0);
		number_al++;
	}
	putchar('\n');
	return (0);
}
