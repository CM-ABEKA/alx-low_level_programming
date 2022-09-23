#include "main.h"
#include <string.h>

/**
 * char *_strcat
 * @dest: destination string
 * @src: source string
 */
int _strln(char *str);
char *_strcat(char *dest, char *src)
{
	int i;
	int ln_d = strlen(dest);
	int ln_s = strlen(src);

	for (i = 0; i <= ln_s; i++)
	{
		dest[ln_d + i] = src[i];
	}
	return (dest);
}
