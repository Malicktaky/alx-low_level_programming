#include <stdio.h>

/**
 * main - print alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low_alpha = 'a';
	char up_alpha = 'A';

	while (low_alpha <= 'z')
	{
		putchar(low_alpha + 0);
		low_alpha++;
	}
	while (up_alpha <= 'Z')
	{
		putchar(up_alpha + 0);
		up_alpha++;
	}
	putchar('\n');
	return (0);
}
