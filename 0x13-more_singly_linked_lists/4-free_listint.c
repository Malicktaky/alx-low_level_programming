#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the list to free
 */
void free_listint(listint_t *head)
{
	listint_t *new_head;

	while (head)
	{
		new_head = head->next;
		free(head);
		head = new_head;
	}
	free(head);
}
