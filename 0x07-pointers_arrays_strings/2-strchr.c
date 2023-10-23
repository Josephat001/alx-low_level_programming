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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *)s;
		}
		else
		{
			return (NULL);
		}			
	}
}
