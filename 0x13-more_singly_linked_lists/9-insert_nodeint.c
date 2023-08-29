#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the list to modify
 * @idx: the index of the node
 * @n: le number to add
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *count_node, *new_node;
	size_t i = 0, j = 0;

	count_node = (*head);
	while (count_node)
	{
		i++;
		count_node = count_node->next;
	}
	if (idx > i)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	tmp = (*head);
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (*head);
	}
	while (j < idx && tmp)
	{
		j++;
		if (j == idx)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		tmp = tmp->next;
	}
	return (*head);
}
