#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs.
 * @d: pointer to dog struct.
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	free(d);
}
