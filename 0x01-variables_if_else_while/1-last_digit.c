#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if the last digit is greater than 5, is 0 or is less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lst_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_number = n % 10;
	printf("Last digit of %d is %d ", n, lst_number);
	if (lst_number < 6 && lst_number != 0)
		printf("and is less than 6 and not 0\n");
	else if (lst_number > 5)
		printf("and is greater than 5\n");
	else
		printf("and is 0\n");
	return (0);
}
