#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the variable of type struct dog
 * @name: name
 * @age: float type age
 * @owner: owner
 * @d: dog struct
 *
 * Description: initializes the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
