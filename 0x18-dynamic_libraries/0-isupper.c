#include "holberton.h"

/**
 * _isupper - checks for uppercase letter
 * Return: 1 if c is upper, 0 otherwise.
 * @c: int parameter to be checked.
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)

		return (1);
	else
		return (0);

}
