#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: The character to write
 *
 * Return: 1 0n success
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
