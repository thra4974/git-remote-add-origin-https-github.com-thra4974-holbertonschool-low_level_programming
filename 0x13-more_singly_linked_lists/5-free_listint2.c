#include "lists.h"

/**
 * free_listint2 - frees a list_t list sets head to NULL
 * @head: double pointer to head;
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *nullhead;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nullhead = (*head)->next;
		free(*head);
		*head = nullhead;
	}
}
