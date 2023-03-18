#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse with putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha + 0);
		alpha--;
	}
	putchar('\n');
	return (0);
}
