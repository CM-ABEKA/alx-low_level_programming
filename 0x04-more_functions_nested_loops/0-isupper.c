#include "main.h"

/**
 * main - Entry point
 * @c: character to be tested
 * Return: 0 when lower, 1 uppercase
 */

int _isupper(int b)
{
	if ((b >= 'A') && (b <= 'Z'))
	{
		return (1);
	}
	return (0);
}
