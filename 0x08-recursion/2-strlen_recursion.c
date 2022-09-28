#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: the string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (len);
}
