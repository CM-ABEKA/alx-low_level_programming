#include "main.h"
#include <string.h>

/**
 * _strcat - concactenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: return concated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;
	int ln_d = 0;
	int ln_s = 0;

	for (j = 0; dest[j] != '\0'; j++)
		ln_d++;
	for (k = 0; src[k] != '\0'; k++)
		ln_s++;
	for (i = 0; i <= ln_s; i++)
	{
		dest[ln_d + i] = src[i];
	}
	return (dest);
}
