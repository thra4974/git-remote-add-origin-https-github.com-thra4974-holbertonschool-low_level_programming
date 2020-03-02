#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments passed.
 * @argv: pointer to vector of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int res = a * b;

	if (argc == 3)
	{
		printf("%d\n", res);
	}

	else
	{
		printf("Error\n");
	}

	return (1);
}
