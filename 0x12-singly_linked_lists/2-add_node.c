#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a list to enter
 * @str: the string to enter
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (ptr->str[i] != '\0')
	{
		i++;
	}
	ptr->len = i;

	ptr->next = (*head);
	(*head) = ptr;

	return (ptr);
}
