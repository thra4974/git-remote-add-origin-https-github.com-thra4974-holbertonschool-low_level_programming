#include "holberton.h"

/**
 * _strpbrk - locates first occuences in s of bytes in accept.
 * @s: string to be evaluated.
 * @accept: contains bytes to be located in s.
 * Return: Character 's'.
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}

		}

	}

	return (0);
}
