#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog details
 * @name: pointer to name of type char
 * @age: age in type float.
 * @owner: dogs owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
