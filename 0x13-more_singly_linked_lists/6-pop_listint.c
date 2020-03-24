#include "lists.h"

/**
 * pop_listint - function deletes head of list
 * @head: double pointer to head
 * Return: head node data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	tmp = tmp->next;
	free(tmp);
	return (tmp->n);
}
