#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of your program.
 * @ac: argument count.
 * @av: double pointer to arg vector.
 * Return: NULL if ac = 0 || av is NULL, pointer to new str.
 */

char *argstostr(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		av = malloc(ac * sizeof(av));
		return (*av);
	}

	return (0);
}
