#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a list to enter
 * @str: the string to enter
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *ptr;
	int i = 0;

	tmp = *head;
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
		i++;
	ptr->len = i;
	ptr->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = ptr;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = ptr;
	return (ptr);
}
