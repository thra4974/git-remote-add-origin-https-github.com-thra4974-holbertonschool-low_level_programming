#include "holberton.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: number evaluate
 * @index: index to return bit value
 * Return: value of bit as int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n == '\0')
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
