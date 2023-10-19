#include <stdio.h>
#include <string.h>
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
	int i, c = 0;

	if (strlen(s1) == strlen(s2))
	{
		for (i = 0; s2[i]; i++)
		{
			if (s1[i] == s2[i])
			c++;
		}
			if (c == i)
			return (1);
	}

	return (0);
	}

