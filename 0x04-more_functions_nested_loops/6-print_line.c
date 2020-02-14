#include "holberton.h"

/**
 * print_line - program prints a line.
 * Return: void.
 * @n: number of underscores to be printed.
 */

void print_line(int n)
{
	int limit = (n + 1);

	for (n = 0; n < limit; n++)
	{
		if (n > 0)
		{
			_putchar('_');

		}

	}
	_putchar('\n');
}
