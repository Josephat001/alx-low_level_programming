#include <stdio.h>
#include "main.h"

/**
 * wildcmp_recursive - a helper function for comparing two strings.
 *
 * @s1: The first string to compare.
 * @s2: The second string, which can contain the special character *.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */

int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp_recursive(s1, s2 + 1));
		}
		else
		{
			return (wildcmp_recursive(s1 + 1, s2) || wildcmp_recursive(s1, s2 + 1));
		}
	}

	if (*s1 == *s2)
	{
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	}

	return (0);
}

/**
 * wildcmp - check main.c
 * Description: This function compares two strings,
 * allowing for a * character to match any substring.
 *
 * @s1: The first string to compare.
 * @s2: The second string, which can contain the special character *.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
        return (wildcmp_recursive(s1, s2));
}
