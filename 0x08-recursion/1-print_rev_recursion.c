#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - check main
 * Description: this function prints a string in reverse.
 * @s: the string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
