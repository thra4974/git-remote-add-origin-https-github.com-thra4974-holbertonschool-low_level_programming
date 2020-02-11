#include "holberton.h"

/**
 * print_alphabet_x10 - code uses _print_alphabet to print the alphabet x10
 *
 * print_alpabet - prints alphabet in lower case
 */

void print_alphabet_x10(void)
{

	int i;

	for (i = 0; i <= 10; i++)

	{

		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

	}
}
