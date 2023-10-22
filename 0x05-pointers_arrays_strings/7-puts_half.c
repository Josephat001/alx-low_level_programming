#include <stdio.h>
#include "main.h"

/**
 * puts_half - check 7-main.c
 * Description: This function prints half of the string
 * @str: pointer to the string to be printed
 *
 * Return: void
 */

	int n, len, m;

	length = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		m = len / 2;
		for (n = m; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		m = (len - 1) / 2;
		for (n = m + 1; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
