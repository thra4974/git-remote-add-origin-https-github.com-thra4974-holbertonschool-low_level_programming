#include "holberton.h"

/**
 * print_diagonal - prints diagonal line across the screen.
 * Return: void.
 * @n: number of '\'.
 */

void print_diagonal(int n)
{
	int lines = n;
	int limit = (n + 1);

	for (lines = 0; lines < limit; lines++)
	{
		_putchar('\n');
		
		for (n = 0; n < limit; n++)
		{
			
			if ( n > 0)
			{
				_putchar('\\');
				_putchar(' ');
			}
	
	}
		}


}
