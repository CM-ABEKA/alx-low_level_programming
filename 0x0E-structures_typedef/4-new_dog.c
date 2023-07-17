#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Entry point
 * @name: name
 * @age: age
 * @owner: owner
 * Return: the new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	(*d).name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);

	return (d);
}
