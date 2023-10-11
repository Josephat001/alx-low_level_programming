#include <stdio.h>
#include "main.h"

/**
 * times_table - check main
 * Description: This function prints the 9 times table starting from 0.
 * Return: Nothing
 */

void times_table(void)
{
	long int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			int ret = i * j;

			if (ret <= 10)
			{
				_putchar(ret + '0');
				if (j < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((ret / 10) + '0');
				_putchar((ret % 10) + '0');
				if (j < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
