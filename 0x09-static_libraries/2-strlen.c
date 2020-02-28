#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - length of string (array).
 * @s: string to be measured.
 * Return: 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
