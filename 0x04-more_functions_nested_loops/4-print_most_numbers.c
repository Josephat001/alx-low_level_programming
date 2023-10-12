#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check main
 * Description: this function prints most but not all the numbers
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
