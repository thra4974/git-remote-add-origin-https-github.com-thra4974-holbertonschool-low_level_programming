#include "holberton.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: pointer to number
 * @index: index position
 * Return: 1 upon success or -1 upon failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
