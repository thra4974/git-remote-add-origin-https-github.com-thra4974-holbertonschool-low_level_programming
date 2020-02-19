#include "holberton.h"
/**
 * rev_string - write a function that reverses a string.
 * @s: string to be reversed.
 * Return: nothing,
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (j > 0)
	{
		j = s[i];
		j++;
	}
}
