#include <stdio.h>
#include "main.h"

/**
 * print_line - check main
 * @n: times a straight line is printed
 * Description: This function prints a straight line n times
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
			_putchar(95);
		}
		_putchar('\n');
	}
}
