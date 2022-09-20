#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: the string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src [i];

	return (dest);
}
