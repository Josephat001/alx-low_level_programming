#include <stdio.h>
#include "main.h"

/**
 * print_number - This function prints an integer.
 * long, arrays, or pointers are not used.
 * @n: the integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
