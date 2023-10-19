#include <stdio.h>
#include "main.h"

/**
 * _strcmp - check main
 * Description: This function compares two strings
 * @s1: a string
 * @s2: a string
 * Return: 0 upon success.
 */

int _strcmp(char *s1, char *s2)
{
	int c, l;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}

	l = s1[c] - s2[c];
	return (l);
}
