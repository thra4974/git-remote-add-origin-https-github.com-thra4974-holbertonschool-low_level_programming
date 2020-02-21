#include "holberton.h"

/**
 * _strcmp - compare two strings.
 * @s1: pointer to string 1.
 * @s2: pointer to string 2.
 * Return: -1, 1, 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (s1 < s2)
	{
		return (-1);
	}

	else if (s1 > s2)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
