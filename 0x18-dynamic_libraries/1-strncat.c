#include "main.h"

/**
 * _strncat - concactenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to use from src
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, k;
	int ln_d = 0;
	int ln_s = 0;

	for (j = 0; src[j] != '\0'; j++)
		ln_s++;
	for (k = 0; dest[k] != '\0'; k++)
		ln_d++;

	while (i < n && src[i])
	{
		dest[ln_d] = src[i];
		ln_d++;
		i++;
	}
	return (dest);
}

