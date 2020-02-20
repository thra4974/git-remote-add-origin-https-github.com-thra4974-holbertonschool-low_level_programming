#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: src string is appended here.
 * @src: string to be appended to destination.
 * Return: pointer to string "dest".
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
