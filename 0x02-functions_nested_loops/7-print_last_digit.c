#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @i: digit to me tested.
 * Return: last value of digit.
 */

int print_last_digit(int i)

{
	i = i % 10;

	if (i < 0)
	{
		i = i * -1;
	}

	_putchar('0' + i);

	return (i);

}
