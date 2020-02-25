#include "holberton.h"

/**
 * _strspn - gets length of a prefix substring.
 * @s: pointer to a string.
 * @accept: determines bytes to be returned.
 * Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k++;
		}

	}

	return (k);
}
