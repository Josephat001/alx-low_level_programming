#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - check main
 * Description: This function returns the natural square root of a number.
 * @n: The number whose natural square root is to be returned.
 * @a: an integer parameter used in the find_sqrt function
 *
 * Return: -1 if 'n' does not have a natural square root, or, the result of 'n'
 */

int find_sqrt(int n, int a);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}

/*
 * find_sqrt
 * Description: helper function used to search for the square root of a number
 * @a: an integer parameter used in the find_sqrt function
 * @n: n
 * Return: -1 if 'n' does not have a natural square root, or, the result of 'n'
 */

int find_sqrt(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, a + 1));
	}
}
