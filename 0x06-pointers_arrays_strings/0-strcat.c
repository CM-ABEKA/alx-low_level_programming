#include "main.h"

/**
 * char *_strcat
 * @dest: destination string
 * @src: source string
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

int _strln(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
