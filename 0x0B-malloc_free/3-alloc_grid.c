#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D array.
 * @width: columns.
 * @height: rows.
 * Return: pointer if success || NULL upon failure.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;

	int **arr;

	arr = malloc(width * sizeof(*arr));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)

		{
			if (width == 0 || height == 0 || width < 0 || height < 0)
			{
				return (NULL);
			}

			else
			{
				arr[j] = malloc(height * sizeof(arr[0]));
				return (arr);
			}
		}
	}

	return (0);

}
