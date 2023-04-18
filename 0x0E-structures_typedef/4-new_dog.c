#include "dog.h"


/**
 * _strlen - find the length of a string
 * @s: string
 * Return: length of @s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


/**
 * _strcpy - copy string of src to dest
 * @dest: destination to copy to
 * @src: string to copy from
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_malloc = malloc(sizeof(dog_t));
	if (dog_malloc == NULL)
		return (NULL);

	dog_malloc->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_malloc->name == NULL)
	{
		free(dog_malloc->name);
		return (NULL);
	}

	dog_malloc->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_malloc->owner == NULL)
	{
		free(dog_malloc->owner);
		return (NULL);
	}

	dog_malloc->name = _strcpy(dog_malloc->name, name);
	dog_malloc->age = age;
	dog_malloc->owner = _strcpy(dog_malloc->owner, owner);

	return (dog_malloc);
}

