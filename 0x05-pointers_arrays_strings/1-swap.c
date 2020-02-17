#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two integers.
 * @a: first integer will be switched with b.
 * @b: second integer will be switched a.
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
