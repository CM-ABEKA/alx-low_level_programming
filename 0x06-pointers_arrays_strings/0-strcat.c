#include "main.h"
#include <string.h>

/**
 * char *_strcat
 * @dest: destination string
 * @src: source string
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			for (n = 0; ; n++)
			{
				dest[i + n] = src[n];
				if (src[n] == '\0')
					break;
			{
		}
	}
	return (dest);
}

