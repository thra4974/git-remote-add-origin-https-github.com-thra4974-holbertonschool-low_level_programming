#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - printd all natural numbers (n-98).
 * @n: starting integer - 98.
 * Return: void.
 */

void print_to_98(int n)
{

	{
	for (n = n; n < 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
	}

	for (n = n; n > 97; n--)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	}

	printf("\n");
}
