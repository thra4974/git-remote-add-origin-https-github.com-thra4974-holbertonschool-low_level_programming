#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: pointer to h list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h == NULL)
			return (0);
		i++;
		h = h->next;
	}

	return (i);
}
