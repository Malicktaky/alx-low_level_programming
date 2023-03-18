#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number_1 = 0;

	do {
		int number_2 = 1;

		do {
			if (number_1 >= number_2)
			{

			}
			else
			{
				putchar(number_1 + '0');
				putchar(number_2 + '0');
				if (number_1 == 8 && number_2 == 9)
				{

				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
				number_2++;
		} while (number_2 <= 9);
		number_1++;
	} while (number_1 <= 9);
	putchar('\n');
	return (0);
}
