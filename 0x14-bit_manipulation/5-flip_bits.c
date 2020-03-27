#include "holberton.h"

/**
 * flip_bits - returns # of bits needed to flip to get from one number to next
 * @n: first number
 * @m: second num
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int i_just_flipped_the_switch = n ^ m;

	while (i_just_flipped_the_switch)
	{
		i += (i_just_flipped_the_switch & 1);
		i_just_flipped_the_switch >>= 1;
	}

	return (i);
}
