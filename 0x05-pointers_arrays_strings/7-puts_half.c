#include "holberton.h"

/**
 * puts_half - prints second half of string.
 * @str: string to be halved.
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	int half = i / 2;
	int n = ((i - 1) + 2) / 2;

	if (i % 2 == 0)
	{
	while (half < i && half > half - 1)
	{
		_putchar(str[half]);
		half++;
	}
	}

	if (i % 2 != 0)
	{
		while (n < i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
