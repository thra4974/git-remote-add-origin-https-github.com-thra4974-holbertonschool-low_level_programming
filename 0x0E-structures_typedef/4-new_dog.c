#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - copy memory.
 * @str: pointer to string.
 * Return: pointer to new string.
 */

char *_strdup(char *str)
{

	char *dup;
	char *p;
	int i = 0;

	while (str[i])
		i++;
	dup = malloc(i + 1);
	p = dup;

	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (dup);

}

/**
 * new_dog - function creates a new dog
 * @name: pointer to name.
 * @age: floater type, age.
 * @owner: pointer to owner name.
 * Return: dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;
	char *nname = _strdup(name);
	char *nowner = _strdup(owner);
	dog_t *p = &newdog;

	p->name = nname;
	p->age = age;
	p->owner = nowner;

	if (p == NULL)
		return (NULL);

	return (p);
}
