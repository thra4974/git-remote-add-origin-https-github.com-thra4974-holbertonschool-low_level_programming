#include "lists.h"

/**
 * free_list - function frees a list
 * @head: pointer to head of list.
 * Return: nothing.
 */

void free_list(list_t *head)
{

	if (head == NULL)
		exit (99);
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
