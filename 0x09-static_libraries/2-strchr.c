#include "holberton.h"

/**
 * _strchr - locates a character in string.
 * @s: pointer to a string 's'.
 * @c: character in a string.
 * Return: pointer to first occurence of 'c' in 's' or NULL.
 */

char *_strchr(char *s, char c)
{

	while (*s++)
	{

		if (*s == c)
			return (s);
	}

	return (0);

}
