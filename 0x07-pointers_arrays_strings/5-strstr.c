#include "holberton.h"

/**
 * _strstr - function locates a substring.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 * Return: pointer to beginning of located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	while (*haystack++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
		}

	}
		return (0);
}
