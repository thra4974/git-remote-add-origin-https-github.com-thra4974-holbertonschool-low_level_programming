#include "lists.h"

/**
 * list_len - returns number of elements in link ls
 * @h: pointer to list
 * Return: size_t elements of list.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h == NULL)
			return (0);
		h = h->next;
		i++;
	}

	return (i);
}
