#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts not at index
 * @h: double pointer to head
 * @idx: position of nth node
 * @n: list data
 * Return: address of new node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = *h;
	dlistint_t *current = *h;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	new->prev = current;
	return (new);
}
