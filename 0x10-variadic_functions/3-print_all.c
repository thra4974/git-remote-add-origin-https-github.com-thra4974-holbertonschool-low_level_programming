#include "variadic_functions.h"

/**
 * print_char - prints a character.
 * @list: printed param.
 * Return: nothing.
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints integer
 * @list: printed param
 * Return: nothing
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints a float.
 * @list: printed param.
 * Return: nothing.
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints a string
 * @list: printed param.
 * Return: nothing.
 */

void print_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - function prints anything
 * @format: pointer to a list of types of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list list;
	char *sep = "";

	ptype which_type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (which_type[j].c != NULL)
		{
			if (format[i] == *which_type[j].c)
			{
				printf("%s", sep);
				which_type[j].f(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
