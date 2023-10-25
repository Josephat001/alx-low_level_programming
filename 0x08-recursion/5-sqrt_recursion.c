#include <stdio.h>
#include "main.h"

/**
* find_root - find square root of n, starting from the smallest possible, 0
* @n: the number whose natural square root is to be located
* @a: test the root
* Return: -1 if not natural root, or natural square root.
*/

int find_root(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	
	if (a * a == n)
	{
		return (a);
	}
	
	return (find_root(n, a + 1));
}

/**
* _sqrt_recursion - this function finds the natural square root of n
* @n: the number whose natural square root is to be located
* Return: -1 if not natural root, or natural square root. 
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	
	return (find_root(n, 0));
}
