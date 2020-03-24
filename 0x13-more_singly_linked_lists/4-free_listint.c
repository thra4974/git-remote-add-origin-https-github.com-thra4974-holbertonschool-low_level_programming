#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head of list
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
