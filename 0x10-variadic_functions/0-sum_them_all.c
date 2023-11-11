#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum;
	va_list sp;

	va_start(sp, n);

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (a = 0; a < n; a++)
	{
		sum += va_arg(sp, int);
	}
	va_end(sp);

	return (sum);
}
