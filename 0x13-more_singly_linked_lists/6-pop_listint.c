#include "lists.h"

/**
 * pop_listint - function deletes head of list
 * @head: double pointer to head
 * Return: head node data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (*head == NULL)
		return (0);
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
