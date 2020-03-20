#include "lists.h"

/**
 * add_node - pointer to add_node that adds new node at beg of ls.
 * @head: double pointer to head.
 * @str: pointer to string
 * Return: address of new element || NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int duplength = 0;

	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		while (str[duplength] != '\0')
			duplength++;
		new->len = duplength;
		new->next = *head;
		*head = new;
	return (*head);
}
