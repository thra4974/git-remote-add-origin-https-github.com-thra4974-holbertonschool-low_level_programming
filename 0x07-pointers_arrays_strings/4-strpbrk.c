#include "holberton.h"

/**
 * _strpbrk - locates first occuences in s of bytes in accept.
 * @s: string to be evaluated.
 * @accept: contains bytes to be located in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}

	}

	return (0);
}
