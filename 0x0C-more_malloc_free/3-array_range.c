#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function creates an array of integers.
 * @min: first array member.
 * @max: last array member.
 * Return: pointer to newly created array.
 */

int *array_range(int min, int max)
{
	int len = max - min;
	int **arr;
	int count  = min;
	int i;
	int j;

	arr = malloc(len * sizeof(arr[i]));
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		arr[i] = malloc(len * sizeof(arr[i]));
		if (!arr[i])
		{
			while (i--)
				free(arr[i]);
			//free(arr);
			return (NULL);
		}
	}
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j <= len; j++)
			arr[i][j] = count++;
		count = min;
	}
	return (*arr);
}
