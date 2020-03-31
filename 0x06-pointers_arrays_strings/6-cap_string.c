#include "holberton.h"

/**
 * cap_string - function capitalizes all words of a string
 * @s: pointer to string
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int i, j;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
			'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
