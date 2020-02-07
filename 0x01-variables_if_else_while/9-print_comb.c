#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num = 48;

	int com = 44;

	int newline = 10;

	int space = 32;

	for (num = 48; num <= 57; num++)

	{
		putchar(num);
		putchar(com);
		putchar(space);

	}

	putchar(newline);

	return (0);

}

