#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);

/**
 * struct print_type - struct of print type.
 * @c: pointer to type specifier
 * @f: pointer to printf function for each type.
 */

typedef struct print_type
{
	char *c;
	void (*f)(va_list list);
} type;

#endif
