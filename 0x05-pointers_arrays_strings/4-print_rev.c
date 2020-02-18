#include "holberton.h"

/**
 * print_rev - prints string in reverse.
 * @s: string gets reversed.
 * Return: nothing.
 */

void print_rev(char *s)
{
	int i = (_strlen(s) - 1);
	
	while (i != '\0')
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
