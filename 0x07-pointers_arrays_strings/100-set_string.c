#include <stdio.h>
#include "main.h"

/**
 * set_string - check main.h
 * Description: this function sets the value of a pointer to a char
 * @s: the pointer with the value
 * @to: the character to which the value of 's' is to be set to
 *
 * Return: always 0 upon success
 */

void set_string(char **s, char *to)
{
	*s = to;
}
