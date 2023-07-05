#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks whether a string is a pallindrome
 * @s: string to reverse
 *
 * Return: 1 if it is and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));

}

/**
 * check_pal - checks characters recursively
 * @s: string to check
 * @i: iterator
 * @len: string length
 *
 * Return: 1 if palindrome and 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - returns the length of the string
 * @s: string to calculate the length of 
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
