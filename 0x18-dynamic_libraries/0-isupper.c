#include "main.h"

/**
 * _isupper - Entry point
 * @b: character to be tested
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
