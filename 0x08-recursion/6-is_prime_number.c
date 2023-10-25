#include <stdio.h>
#include "main.h"

/**
 * is_root - a helper function to check if 'n' is a prime number
 * @n: the integer to be checked
 * @a: the divisor to test
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int is_root(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}

	if (a * a > n)
	{
	return (1);
	}

	if (n % 2 == '\0')
	{
		return (0);
	}

	return (is_root(n, a + 1));
}

/**
 * is_prime_number - this function prints prime numbers
 * @n: the integer to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (is_root(n, 2));
}

