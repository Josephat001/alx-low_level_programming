#include <stdio.h>
#include "main.h"

/**
 * puts2 - check 6-main.c
 * Description: This function prints every other character of a string,
 * starting with the first character
 * @s: the string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i += 2;
	}
	_putchar('\n');
}

