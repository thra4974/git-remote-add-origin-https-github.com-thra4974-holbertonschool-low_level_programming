#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: double pointer to head
 * @index: index where node will be deleted
 * Return: 1 upon sucess || -1 upon failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *current;
	listint_t *del;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	del = current->next;
	current->next = del->next;
	free(del);
	return (1);
}
