#include <stdio.h>
#include "main.h"

/**
 * print_square - check main
 * @size: size/times of squares to print
 * Description: This function prints squares(#)
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

