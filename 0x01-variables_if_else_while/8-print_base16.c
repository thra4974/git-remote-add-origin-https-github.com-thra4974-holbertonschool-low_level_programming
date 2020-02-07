#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	char ch = 'a';

	int num = 48;

	char newline = '\n';

	for (num = 48; num <= 57; num++)

	{
		putchar(num);

	}

	for (ch = 'a'; ch <= 'f'; ch++)

	{
		putchar(ch);

	}

	putchar(newline);

	return (0);

}
