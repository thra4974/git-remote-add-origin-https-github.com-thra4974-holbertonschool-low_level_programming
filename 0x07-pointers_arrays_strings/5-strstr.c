#include "holberton.h"

/**
 * _strstr - function locates a substring.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 * Return: pointer to beginning of located substring.
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack++)
	{
		char *begin = haystack;
		char *pattern =	needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)

			return (begin);

		haystack = begin + 1;


	}
		return (0);
}
