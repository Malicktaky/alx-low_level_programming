#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of char to print
 *
 * Return: a newly allocated space in memory, which contains s1
 * followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int count_s1 = 0, count_s2 = 0;
	unsigned int new_count = 0;
	unsigned int i, j, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count_s1] != '\0')
		count_s1++;
	while (s2[count_s2] != '\0')
		count_s2++;
	if (n >= count_s2)
	{
		n = count_s2;
		new_count = count_s1 + n;
	}
	new_count = count_s1 + n;
	new_string = malloc(sizeof(char) * new_count + 1);
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < count_s1; i++)
		new_string[i] = s1[i];
	for (j = count_s1; j < new_count; j++, l++)
		new_string[j] = s2[l];

	return (new_string);
}
