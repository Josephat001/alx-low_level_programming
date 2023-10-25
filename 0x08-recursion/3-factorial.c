#include <stdio.h>
#include "main.h"

/**
 * factorial - check main
 *
 * Description: this function returns the factorial of a given number
 *
 * @n: placeholder for the number to be given
 *
 * Return: Always 0 upon success
 */

int factorial(int n)
{
	if (n < '\0')
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
