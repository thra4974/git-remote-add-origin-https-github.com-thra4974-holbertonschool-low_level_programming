#include "holberton.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: number for absolute
 * Return: Always 0.
 */
int _abs(int n)

{

	int mag = n * -1;

	if (n < 0)
	{
		return (mag);

	}

	else
	{
		return (n);
	}
}
