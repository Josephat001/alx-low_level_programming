#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - check main
 * Description: this function returns the length of a string
 * @s: pointer to the string whose length is to be returned
 *
 * Return: always 0 upon success.
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
