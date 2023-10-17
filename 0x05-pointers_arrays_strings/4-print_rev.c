#include <stdio.h>
#include "main.h"

/**
 * print_rev - check 4-main.c
 * Description: This function prints a string 's' in reverse
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
