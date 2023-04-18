#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name to store in the new dog
 * @age: age to store in the new dog
 * @owner: owner to store in the new dog
 * Return: new_dog or
 *	NULL if the function fails
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_malloc;

	dog_malloc = malloc(sizeof(dog_t));
	if (dog_malloc == NULL)
		return (NULL);

	dog_malloc->name = name;
	dog_malloc->age = age;
	dog_malloc->owner = owner;

	return (dog_malloc);
}

