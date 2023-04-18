#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: struct dog typedef
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

