#include "function_pointers.h"

/**
 * print_name - function prints a name.
 * @name: pointer to a name.
 * @f: pointer to a function f.
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
