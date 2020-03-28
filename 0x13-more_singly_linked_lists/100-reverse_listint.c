#include "lists.h"

/**
 * reverse_listint - reverses a list_t linked list
 * @head: double pointer to head
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail;
	int n = 0;

	while (*head != NULL)
	{
		tail = *head;
		reverse_listint(*head -1)

}
