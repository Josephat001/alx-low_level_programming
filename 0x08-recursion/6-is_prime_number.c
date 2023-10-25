#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - check main.c
 * Description: this function prints prime numbers
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int a;

	if (n <= 1)
	{
		return (0);
	}

	for (a = 2; a * a < n; a++)
	{
		if (n % a == '\0')
		{
			return (0);
		}
	}

	return (1);
}
