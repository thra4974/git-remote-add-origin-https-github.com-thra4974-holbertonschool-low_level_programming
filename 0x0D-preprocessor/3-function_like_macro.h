#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H
/**
 * ABS - returns absolute value of int x.
 * @x: integer input
 * Return: integer
 */

int ABS(int x)
{
	if (x < 0)
	{
		return ((x) * (-1));
	}
	else
	{
		return (x);
	}
}

#endif
