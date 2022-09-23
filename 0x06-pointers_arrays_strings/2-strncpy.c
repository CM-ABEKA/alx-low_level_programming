#include "main.h"

/**
 * _strncpy - copies a strng
 * @dest: destination
 * @src: source string
 * @n: lentgh
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ln_s = 0, i = 0, j = 0, k = 0;

	for (i = 0; src[i] != '\0'; i++)
		ln_s++;
	if (ln_s > n)
	{
		while (j < n)
		{
			dest[j] = src[j];
			j++;
		}
	}
		
	while (ln_s < n && src[k])
	{
		dest[k] = src[k];
		k++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
