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
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		j++;
	}
	j++;
	new_str = malloc(sizeof(char) * j);
	if (new_str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}
