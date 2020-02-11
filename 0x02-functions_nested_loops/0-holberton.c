#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: 0.
 */

int main(void)

{
	char c[9] = "Holberton";
	int a = 0;

	for (a = 0; a < 9; a++)
	{
		_putchar(c[a]);
	}

	_putchar('\n');

	return (0);

}
