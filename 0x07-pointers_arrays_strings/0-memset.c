#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to a string.
 * @b: constant byte.
 * @n: unsigned integer resembles bytes.
 * Return: Character.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
