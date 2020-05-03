#include "lists.h"

/**
 * add_dnodeint_end - adds node at end
 * @head: double pointer to head
 * @n: list data
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tail = *head;

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;
	new->next = NULL;

	return (new);
}
