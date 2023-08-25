#include "lists.h"

/**
 * list_len - count the number of node
 * @h: the list to enter
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
