#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: pointer to an array.
 * @size: number of elements in array.
 * @cmp: pointer to compare function.
 * Return: index of first element where cmp doesnt return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) && array[i] != 0)
			{
				cmp(array[i]);
				break;
			}

		}

			return (i);
	}

	else
	{
		return (-1);
	}
}
