#include "holberton.h"

/**
 * _pow_recursion - returns value of x raised to y.
 * @x: value to be evaluated.
 * @y: power superscript.
 * Return: integer (value x to power of y).
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{

		return (x * (_pow_recursion(x, y - 1)));
	}

}
