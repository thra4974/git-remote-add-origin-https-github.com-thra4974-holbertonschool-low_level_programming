#include "lists.h"

/**
 * sum_dlistint - sums dlists data
 * @head: pointer to head of dlist
 * Return: sum of all data, if null return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->prev;
	}
	return (sum);
}
