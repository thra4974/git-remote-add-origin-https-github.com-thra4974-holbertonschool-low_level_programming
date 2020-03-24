#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to head of list
 * @index: index of node from 0
 * Return: nth node || NULL if node !(exist)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
	return (0);
}
