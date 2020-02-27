#include "holberton.h"

/**
 * _strlen_recursion - returns length of string recursively.
 * @s: pointer to string 's'.
 * Return: integer (length of string).
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
