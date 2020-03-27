#include "holberton.h"

/**
 * set_bit - sets the alue of a bit to 1 at given index
 * @n: pointer to number
 * @index: index of bit
 * Return: 1 upon success or -1 upon failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n |= 1 << index;
	return (1);
}
