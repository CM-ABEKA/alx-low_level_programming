#include "main.h"

/**
 * is_prime_number - checks wheter number is prime or not
 * @n: the number
 * Return: (1) if prime and (0) if not prime
 */
int checkdivisor(int n, int i);
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if ( n == 1)
		return (0);
	else if (checkdivisor(n , n / 2) > 0)
		return (1);
	return (0);
}

/**
 * checkdivisor - checks if number has divisor
 * @n: the number
 * @i: the counter
 * Return: result of division
 */
int checkdivisor(int n, int i)
{
	if (i > 1 && n % i == 0)
		return (0);
	if (i == 1)
		return (1);
	else
		return (checkdivisor(n, i - 1));
	
}
