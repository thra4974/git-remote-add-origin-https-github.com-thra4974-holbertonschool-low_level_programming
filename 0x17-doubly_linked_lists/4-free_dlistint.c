#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	while (head != NULL)
	{
		free(head);
		head = head->prev;
	}
}
