#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes with specific.
 * @size: unsigned integer represents the size of array.
 * @c: character.
 * Return: NULL if size = 0, Pointer to array if not zero, and NULL if program fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(char) * size);

	while (i < size)
	{
		if (size == 0)
		{
			return (0);
		}

		else
		{
			arr[i] = c;
			return(arr);
		}
		i++;
	}

	return (0);
}
