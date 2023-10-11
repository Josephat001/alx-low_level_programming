#include <stdio.h>
#include "main.h"

/**
 * times_table - check main
 * Description: Write a function that prints the 9 times table, starting with 0
 * Return: Nothing
 */

void times_table(void)
{
	long int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int ret = i * j;

			if (j == 0)
			{
				_putchar('0' + 0);
			}
				else if (ret < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + ret);
				}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (ret / 10));
				_putchar('0' + (ret % 10));
				if (j == 9)
				{
					_putchar('\n');
				}
			}
		}
	}
}
