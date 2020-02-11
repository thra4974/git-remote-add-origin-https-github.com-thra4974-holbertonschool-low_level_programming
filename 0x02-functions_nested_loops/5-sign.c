#include "holberton.h"

/**
 * print_sign - prints sign of a number
 * @n: indicates number to be tested.
 * Return: 1 if n is positive, 0 if zero, -1 if negative.
 *
 *
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);

	return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
	return (0);
	}

	else
	{
		_putchar(45);
	return (-1);
	}

}
