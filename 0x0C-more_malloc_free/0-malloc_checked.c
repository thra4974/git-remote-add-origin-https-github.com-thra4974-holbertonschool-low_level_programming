#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned integer to be eval.
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(sizeof(unsigned int) * (b));

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
