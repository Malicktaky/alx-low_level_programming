#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the list to enter
 * @n: the number to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *last;

	tmp = *head;
	last = malloc(sizeof(listint_t));
	if (!last)
		return (NULL);

	last->n = n;
	last->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = last;
		return (*head);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = last;

	return (*head);
}
