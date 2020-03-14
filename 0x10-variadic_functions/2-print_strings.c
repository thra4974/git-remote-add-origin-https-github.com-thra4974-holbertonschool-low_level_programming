#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer to a delimeter.
 * @n: number of arguments passed.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *cur;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		cur = va_arg(strings, char*);

		if (cur == NULL)
			printf("(nil)\n");

		else if (separator != NULL)
		{

			if ((i < n - 1) && cur != NULL)
			{
				printf("%s%s", cur, separator);
			}

			else
				printf("%s\n", cur);
		}
	}

	va_end(strings);
}
