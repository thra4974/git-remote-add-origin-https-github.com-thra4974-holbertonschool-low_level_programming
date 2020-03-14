#include "variadic_functions.h"

/**
 * sum_them_all: sums all variable param.
 * @n: total number of variable arguments of type unsigned int
 * Return: integer.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, unsigned int);
	}

	va_end(numbers);

	return (sum);
}
