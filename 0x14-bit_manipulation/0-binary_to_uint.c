#include "holberton.h"

/**
 * binary_to_uint - conerts binary num to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number | 0 up on Failure
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] - 48) == 0 || (b[i] - 48) == 1)
		{
			sum = 2 * sum + (b[i] - 48);
			i++;
		}
		else
			return (0);
	}
	return (sum);
}
