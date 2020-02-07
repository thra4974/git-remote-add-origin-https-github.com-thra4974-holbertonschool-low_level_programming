#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int num = 0;

	char newline = '\n';

	for (num = 0; num <= 9; num++)

	{
		printf("%d", num);

	}

	putchar(newline);

	return (0);
}
