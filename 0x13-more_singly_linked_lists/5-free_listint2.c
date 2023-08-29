#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head))
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
	}
	free((*head));
	*head = NULL;
}
