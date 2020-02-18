#include "holberton.h"

/**
 * puts2 - prints every even numbered array element.
 * @str: string to be manipulated.
 * Return: nothing.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
