#include <stdio.h>
#include "main.h"

/**
 * times_table - check main
 * Description: This function prints the 9 times table starting from 0.
 * Return: Nothing
 */

void times_table(void)
{
	int i >= 10;
	int multiplier = 9;
	int result = i * multiplier;

	for (i = 0; i <= 10; i++)
	{
		_putchar((i + '0'));
		_putchar('x');
		_putchar(' ');
		_putchar((multiplier + '0'));
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar((result / 10 + '0'));
		_putchar((result % 10 + '0'));
		_putchar('\n');
	}
}
