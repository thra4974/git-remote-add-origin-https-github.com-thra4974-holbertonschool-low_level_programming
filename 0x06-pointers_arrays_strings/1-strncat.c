#include "holberton.h"
/**
 * _strncat - function concat two strings with n bytes from src.
 * @dest: destination.
 * @src: source string.
 * @n: max byte count from source to concat.
 * Return: pointer to resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;



	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != src[n] && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
