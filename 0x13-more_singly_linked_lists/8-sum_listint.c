#include "lists.h"

/**
 * sum_listint - sums data(n) of listint_t linked list
 * @head: pointer to head of function
 * Return: sum as an integer
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
