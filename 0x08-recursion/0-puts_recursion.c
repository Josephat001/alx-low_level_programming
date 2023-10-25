#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - check main
 * Description: this function prints a string, followed by a new line.
 * @s: the string to be printed
 *
 * Return: always 0 upon success
 */

void _puts_recursion(char *s)
{
if (*s == '\0')

return;

_print_rev_recursion(s + 1);
_putchar(*s);
}
