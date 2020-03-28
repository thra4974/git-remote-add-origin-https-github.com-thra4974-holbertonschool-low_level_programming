#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *nullhead;

	if (head == NULL)
		return;
	free_listint2(*head->next);
	free(*head);
	*head = nullhead;
}
