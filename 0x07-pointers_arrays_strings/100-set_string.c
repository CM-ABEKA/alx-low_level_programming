#include "main.h"
#include <stdio.h>

/**
 * set_string - sets balue of a pointer to a char.
 * @s: double pointer initial value.
 * @to: value to set to.
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
