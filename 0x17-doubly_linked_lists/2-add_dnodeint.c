#include "lists.h"

/**
 * add_dnodeint - adds new node at beginnig of a dlist
 * @head: double pointer to head
 * @n: list data
 * Return: address of new element, or Null if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
