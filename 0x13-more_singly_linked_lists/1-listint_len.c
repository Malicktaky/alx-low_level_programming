#include "lists.h"

/**
 * listint_len - count the number of elements in a linked listint_t list.
 * @h: the list
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != 0)
	{
		i++;
		h = h->next;
	}
	return (i);
}
