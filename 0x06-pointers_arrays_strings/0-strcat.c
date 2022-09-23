#include "main.h"
#include <string.h>

/**
 * char *_strcat
 * @dest: destination string
 * @src: source string
 * Return: retur concat string
 */
int _strln(char *str);
char *_strcat(char *dest, char *src)
{
	int i;
	int ln_d = _strln(dest);
	int ln_s = _strln(src);

	for (i = 0; i <= ln_s; i++)
	{
		dest[ln_d + i] = src[i];
	}
	return (dest);
}

/**
 * _strln - returns the length of a string
 * @str: the string
 * Return: string length
 */
int _strln(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
