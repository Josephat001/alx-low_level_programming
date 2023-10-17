#include <stdio.h>
#include "main.h"

/**
 * _strlen - check 2-main.c
 * Description: This function prints the length of the string 's'
 * @s: the string whose length is to be printed
 *
 * Return: void.
 */

int _strlen(char *s)
{
	int _strlen = 0;

	while (s[_strlen])
	{
		_strlen++;
	}
	return (_strlen);
}
