#include "holberton.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return: void.
 */

void times_table(void)
{
	int top ;
	int side;
	int n; 

	for (top = 0; top <= 9; top++)
	{
		for (side = 0; side <= 9; side++)
			n = side * top;
		{
			if (side > 9)
			{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}

}
