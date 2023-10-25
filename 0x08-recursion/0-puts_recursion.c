#include <stdio.h>
#include "main.h"

/**
* _print_rev_recursion - This function prints a string in reverse followed by a new line
* @s: The pointer to use
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
  if (*s == '\0')
  {
    return;
  }
  else
  {
    _print_rev_recursion(s + 1);

    if (*s != ' ')
    _putchar(*s);
  }
}
