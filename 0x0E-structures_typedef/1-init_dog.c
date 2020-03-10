#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog.
 * @d: pointer to d.
 * @name: pointer to name in struct dog.
 * @age: floater.
 * @owner: pointer to owner name.
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
