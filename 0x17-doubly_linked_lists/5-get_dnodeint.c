#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of dlist
 * @head: pointer to head of dlist
 * @index: index of nth node
 * Return: returns nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->prev;
	}
	return (head);
}
