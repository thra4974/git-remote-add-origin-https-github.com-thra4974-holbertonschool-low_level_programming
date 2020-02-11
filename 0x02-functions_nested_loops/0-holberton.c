#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)

{
	char c[10] = "Holberton";
	int a = 0;

	for (a = 0; a < 10; a++)
	{
		_putchar(c[a]);
	}

	_putchar('\n');
	return (0);

}
