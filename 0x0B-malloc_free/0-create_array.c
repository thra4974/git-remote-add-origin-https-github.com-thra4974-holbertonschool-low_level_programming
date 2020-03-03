#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes with specific.
 * @size: unsigned integer represents the size of array.
 * @c: character.
 * Return: NULL if size = 0 or fails, Pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;

		if (size == 0)
		{
			return (0);
		}

		else
		{
			return (arr);
		}

	}

	return (0);
}
