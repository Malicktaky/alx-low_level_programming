#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: the list to enter
 * @n: the number to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_add;

	new_add = malloc(sizeof(listint_t));
	if (new_add == NULL)
		return (NULL);

	new_add->n = n;
	new_add->next = (*head);
	(*head) = new_add;

	return (*head);
}
