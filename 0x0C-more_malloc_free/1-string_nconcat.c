#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * _strlen1 - string length.
 * @str = pointer to string.
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string gets appended to first.
 * Return: pointer to allocated mem. containing s1 and n bytes s2.
 */

unsigned int _strlen1(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;
	char *ptr;

	len1 = _strlen1(s1);
	len2 = _strlen1(s2);

	ptr = (char *)malloc((len1 + len2 + 2) * sizeof(char));

	if (s1 == NULL || s2 == NULL)
		return (0);
	else if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			ptr[i] = s2[j];
		
			ptr[i] = '\0';
		}
		return (ptr);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s1[i] = ptr[i];
		}
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			ptr[i] = s2[j];
			ptr[i] = '\0';
		}
		return (ptr);
	}

}
