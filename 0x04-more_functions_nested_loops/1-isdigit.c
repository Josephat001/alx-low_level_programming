#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check main
 * @c: an integer input
 * Description: This function checks if a character is a digit
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
