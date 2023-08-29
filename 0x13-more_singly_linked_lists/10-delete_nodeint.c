#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: the list to enter
 * @index: the index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp;
	int result;
	size_t j = 0;

	tmp = (*head);
	if ((*head) == NULL)
		result = -1;

	while (j < index - 1)
	{
		j++;
		tmp = tmp->next;
	}
	temp = tmp->next;
	tmp->next = temp->next;
	free(temp);
	result = 1;
	return (result);
}
