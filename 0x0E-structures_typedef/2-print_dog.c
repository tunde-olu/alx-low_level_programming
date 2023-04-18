#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: Pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name : %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age : %f\n", d->age == NULL ? "(nil)" : d->age);
	printf("Owner : %s\n", d->owner == NULL ? "(nil)" : d->owner);
}

