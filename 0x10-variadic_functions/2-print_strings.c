#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("\n");
	}
}
