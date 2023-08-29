#include "lists.h"

/**
 * get_nodeint_at_index - display the nth node of a listint_t linked list.
 * @head: the list to enter
 * @index: the node to return
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0, j = 0;
	listint_t *node;
	listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	if (index > i)
		return (NULL);

	node  = head;
	while (j < index)
	{
		j++;
		node = node->next;
	}
	return (node);
}
