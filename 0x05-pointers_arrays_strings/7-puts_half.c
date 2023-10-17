#include <stdio.h>
#include "main.h"

/**
 * puts_half - check 7-main.c
 * Description: This function prints half of the string
 * @str: pointer to the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n;
	int length_of_the_string = 0;

	n = (length_of_the_string - 1) / 2;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			_putchar(n);
		}
		i++;
	}
	_putchar('\n');
}
