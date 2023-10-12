#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check main
 * Description: This function prints numbers
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
