#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - check main
 * @n: times the diagonal line will be drawn
 * Description: This function prints diagonal lines n times
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i;

	for (i = '0'; i < n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
