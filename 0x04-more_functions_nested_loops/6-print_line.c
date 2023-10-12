#include <stdio.h>
#include "main.h"

/**
 * print_line - check main
 * @n: an integer
 * Description: This function prints a straight line
 *
 * Return: Nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
