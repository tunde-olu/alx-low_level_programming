#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: A struct of dog
 * @name: name to initialize struct dog with
 * @age: age to initialize struct dog with
 * @owner: owne to initalize struct dog with
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

