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

    while (str[length_of_the_string] != '\0')
    {
        length_of_the_string++;
    }

    if (length_of_the_string % 2 == 0)
    {
        n = length_of_the_string / 2;
    }
    else
    {
        n = (length_of_the_string - 1) / 2;
    }

    for (i = n; i < length_of_the_string; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
