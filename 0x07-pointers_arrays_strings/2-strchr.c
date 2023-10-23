#include <stdio.h>
#include "main.h"

/**
 * _strchr - check 2-main.c
 * Description: this function locates a character in a string
 * @c: a character whose first occurence is to be located in 's'
 * @s: pointer to the string in which character 'c' is to be copied from
 *
 * Return: pointer to 'c'.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	i++;

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
