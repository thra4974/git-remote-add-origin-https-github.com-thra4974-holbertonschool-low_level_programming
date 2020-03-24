#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: double ptr to head of list
 * @idx: index of list to insert new node
 * @n: data in list
 * Return: address of new node || NULL upon failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (i < idx - 1)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
		i++;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
