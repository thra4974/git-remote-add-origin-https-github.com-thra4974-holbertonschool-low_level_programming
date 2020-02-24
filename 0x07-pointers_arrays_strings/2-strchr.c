#include "holberton.h"

/**
 * _strchr - locates a character in string.
 * @s: pointer to a string 's'.
 * @c: character in a string.
 * Return: pointer to first occurence of 'c' in 's' or NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		
	}

	
	if (s[i] == c)
	{
	for (s[i] = c; s[i] < i; i++)

		rexturn (s);
	}

	else
		return ('\0');


}
