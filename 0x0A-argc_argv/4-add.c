#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive numbers.
 * @argc: number of arguments passed to program.
 * @argv: pointer to argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) != 0)
		{
			sum += atoi(argv[i]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%d\n", sum);
	return (0);
}
