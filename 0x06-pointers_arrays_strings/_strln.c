#include "main.h"

/**
 * _strln - returns the length of a string
 * @str: the string
 * Return: lentgh of the string
 */
int _strln(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
