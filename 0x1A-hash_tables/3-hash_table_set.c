#include "hash_tables.h"

/**
 * _strdup - duplicates src string
 * @src: reference to src string
 * Return: dup string
 */

char *_strdup(const char *src)
{
	size_t len = strlen(src) + 1;
	char *s = malloc(len);
	if (s == NULL)
		return (NULL);
	return (char *)memcpy(s, src, len);
}

/**
 * hash_table_set - adds element to hash table
 * @ht: pointer to hashtable
 * @key: pointer to key
 * @value: pointer to inserted value
 * Return: 1 if success or 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;

	if (ht == NULL)
		return (0);
	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
		return (0);
	head->key = _strdup(key);
	head->value = _strdup(value);
	
	insert_item(ht, head);
	return (1);
}

/**
 * insert_item - inserts item
 * @ht: pointer to hashtable
 * @head: head of list
 */

void insert_item(hash_table_t *ht, hash_node_t *head)
{
	unsigned int idx = key_index(head->key, ht->size);
	hash_node_t *temp = ht->array[idx];

	if (ht->array[idx] != NULL)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, head->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			head->next = ht->array[idx];
			ht->array[idx] = head;
		}
		else
		{
			free(temp->value);
			temp->value = _strdup(head->value);
			free(head->key);
			free(head);
		}
	}
	else
	{
		head->next = NULL;
		ht->array[idx] = head;
	}
}
