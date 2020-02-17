#include "holberton.h"
#include <stdio.h>

/**
 *fizz_buzz: program prints fizzbuzz
 */

int main (void)
{
	int n;

	for (n = '1'; n < '100'; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			if (n % 15 == 0)
			{
				printf("FizzBuzz");
			}

			if (n % 3 == 0)
			{
				printf("Fizz");
			}

			else
			{
				printf("Buzz");
			}

			printf("\n");
		}
	}
}
