#include "hash_tables.h"

/**
 * key_index - gets index of a key in hashtable
 * @key: key
 * @size: size of array of hashtable
 * Return: key_index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash;
	unsigned int idx;

	hash = hash_djb2(key);
	idx = hash % size;
	return (idx);
}
