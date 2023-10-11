#include <stdio.h>
#include "main.h"

/**
 * int_abs - check main
 * @n: Integer input
 * Description: This function computes the absolute value of an integer.
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n <= 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
