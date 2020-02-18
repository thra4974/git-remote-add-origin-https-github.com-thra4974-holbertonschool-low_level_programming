#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char *s;
	int len;

	s = "Holberton!";
	len = _strlen(s);
	printf("%d\n", len);
	return (0);
}
