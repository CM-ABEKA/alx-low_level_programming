#include "main.h"

/**
 * _isalpha - checks whether letter is alphabetic
 * @c: single letter input
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
