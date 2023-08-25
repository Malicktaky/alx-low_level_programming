#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list to enter
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head);
	head = NULL;
}
