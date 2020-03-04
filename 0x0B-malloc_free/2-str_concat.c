#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to destination string.
 * @s2: string to be concated to s1.
 * Return: return to new allo. space in mem || NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	char *cat;

	if (s1 == 0 || s2 == 0)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
	{
		;
	}

	for (l = 0; s2[l] != '\0'; l++)
	{
		;
	}

	cat = malloc(k + l + 1);

	if (cat == NULL)
		return (NULL);

	for  (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	{
	cat[i + j] = s2[j];
	}
	return (cat);
}
