#include "holberton.h"

/**
 * leet - encodes string into 1337
 * @s: pointer to string
 * Return: character pointer to string
 */

char *leet(char *s)
{
	int i, j;
	char spec[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T',
		   'l', 'L'};
	char code[10] = {'4', '4', '3', '3', '0',
		      '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == spec[j])
			{
				s[i] = code[j];
			}
		}
	}
	return (s);
}
