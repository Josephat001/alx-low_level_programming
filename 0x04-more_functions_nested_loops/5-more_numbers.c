#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check main
 * Description: This function prints numbers multiple times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	char a, b;

	for (a = '0'; a <= 14; a++)
	{
		for (b = '0'; b = 10; b++)
		{
			_putchar(a);
			_putchar(b);
		}
	}
	_putchar('\n');
}
