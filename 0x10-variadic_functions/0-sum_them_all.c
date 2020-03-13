#include "variadic_functions.h"

/**
 * sum_them_all: sums all variable param.
 * @n: total number of variable arguments of type unsigned int
 * Return: integer.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
