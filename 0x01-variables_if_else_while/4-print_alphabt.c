#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{

		}
		else
		{
			putchar(alpha + 0);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
