#include <stdio.h>

/**
 * op_add - Returns the sum of a and b
 * @a: integer one
 * @b: second integer
 * Return: sum of one and two
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}

/**
 * op_sub - returns a subtraction of two integers
 * @a: integer
 * @b: integer
 * Return: the difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = (a - b);
	return (diff);
}

/**
 * op_mul - return the multiplicatio
 * @a: int
 * @b: int
 *
 * Return: The product
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - return the division
 * @a: int
 * @b: int
 * Return: the division
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - Returns the modulus of two numbers
 * @a: int
 * @b: int
 * Return: modulus
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
