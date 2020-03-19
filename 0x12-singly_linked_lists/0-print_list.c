#include "lists.h"

/**
 * print_list - prints all em of list_t ls.
 * @h: pointer to list_t em.
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
