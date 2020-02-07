#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char ch = '{';

	char newline = '\n';

	for (ch = '{'; ch-- > 'a';)

	{
		putchar(ch);

	}

	putchar(newline);

	return (0);

}
