#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char ch = 'a';

	char newline = '\n';

	char chcap = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)

	{

		putchar(ch);

	}

	for (chcap = 'A'; chcap <= 'Z'; chcap++)

	{

		putchar(chcap);

	}

	putchar(newline);

	return (0);
}
