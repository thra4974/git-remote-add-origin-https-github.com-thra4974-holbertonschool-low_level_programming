#include "lists.h"

/**
 * print_listint - prints all elements of list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			return (0);
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
