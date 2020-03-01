#include "holberton.h"
#include <stdio.h>

/**
 * main - program prints all recieved arguments.
 * @argc: number of arguments.
 * @argv: pointer to argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
