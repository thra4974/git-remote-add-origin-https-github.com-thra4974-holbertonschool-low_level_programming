#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string gets appended to first.
 * @n: n bytes from s2.
 * Return: pointer to allocated mem. containing s1 and n bytes s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int b = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *ptr;

	if (!s1)
	{
		s1 = "";
	}

	if (!s2)
	{
		s2 = "";
	}

	while (s1[i])
	{
		i++;
	}

	ptr = malloc(((i + n) * sizeof(*s1)) + 1);

	if (!ptr)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = s1[j];
	}

	for (b = 0; b < n && s2[b]; b++, j++)
	{
		ptr[j] = s2[b];
	}

	ptr[j] = '\0';

	return (ptr);
}
