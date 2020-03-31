#include "holberton.h"

/**
 * reverse_array - reverses an array of integers.
 * @a: array to be reversed.
 * @n: number of elements in array.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b = 0;

	n--;
	for (i = 0; i < n; i++)
	{
		b = a[n];
		a[n] = a[i];
		a[i] = b;
		b--;
	}
}
