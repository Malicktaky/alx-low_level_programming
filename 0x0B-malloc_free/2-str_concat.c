#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the string 1 to concatenate
 * @s2: the string 2 to concatenate
 *
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, len_s = 0;
	int i, j, l = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	len_s = len_s1 + len_s2 + 1;
	new_str = malloc(sizeof(char) * len_s);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = len_s1; j < len_s; j++, l++)
	{
		new_str[j] = s2[l];
	}
	new_str[j] = '\0';
	return (new_str);
}
