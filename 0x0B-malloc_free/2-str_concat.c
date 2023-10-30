#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new allocated space, 0 otherwise
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, a, b, c;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		a = 0;
	else
	{
		for (a = 0; s2[a]; a++)
			;
	}
	b = i + a + 1;
	s = malloc(b * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		s[a] = s1[a];
	for (c = 0; c < a; c++)
		s[c + i] = s2[c];
	s[i + b] = '\0';
	return (s);
}
