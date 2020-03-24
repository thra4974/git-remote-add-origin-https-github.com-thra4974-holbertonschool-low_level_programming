#include "lists.h"
/**
 * add_nodeint - pointer to function adds new node at start
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address if pass or NULL if failed 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return(*head);
}
