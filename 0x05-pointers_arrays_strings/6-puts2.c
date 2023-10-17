#include <stdio.h>
#include "main.h"

/**
 * puts2 - check 6-main.c
 * Description: This function prints every other character of a string,
 * starting with the first character
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

