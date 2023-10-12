#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - check main
 * @n: times the diagonal line is printed
 * Description: This function prints diagonal lines n times
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
