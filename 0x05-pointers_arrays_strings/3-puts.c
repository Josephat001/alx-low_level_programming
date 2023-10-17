#include <stdio.h>
#include "main.h"

/**
 * _puts - check 3-main.c
 * Description: This function prints a string to stdout
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
