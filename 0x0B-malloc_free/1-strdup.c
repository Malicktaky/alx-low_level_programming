#include "main.h"

/**
 * _strdup - create a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy
 *
 * Return: a pointer to the duplicated string.
 * Or returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(str));
	if (new_str == NULL)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
