#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Entry point
 * @d: the dog struct
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (ni)l\n");
	else
		printf("Owner: %s\n", d->owner);

}
