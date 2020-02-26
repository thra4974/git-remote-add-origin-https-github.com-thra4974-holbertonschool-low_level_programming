#include "holberton.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to a pointer of s.
 * @to: pointer to a character.
 * Return: nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
