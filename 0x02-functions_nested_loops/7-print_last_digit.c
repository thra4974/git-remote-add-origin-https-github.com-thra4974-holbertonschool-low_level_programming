#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @i: digit to me tested.
 * Return: last value of digit.
 */

int print_last_digit(int i)

{
	lastdig = i % 10;

	_putchar(lastdig);

	return (0);
}
