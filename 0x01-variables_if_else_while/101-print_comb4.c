#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num_1 = 0;

	do {
	int num_2 = 1;

		do {
		int num_3 = 2;

			do {
				if ((num_1 >= num_2) || (num_1 >= num_3) || (num_2 >= num_3))
				{

				}
				else
				{
					putchar(num_1 + '0');
					putchar(num_2 + '0');
					putchar(num_3 + '0');
					if (num_1 == 7 && num_2 == 8 && num_3 == 9)
					{

					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				num_3++;
			} while (num_3 <= 9);
			num_2++;
		} while (num_2 <= 9);
		num_1++;
	} while (num_1 <= 9);
	putchar('\n');
	return (0);
}
