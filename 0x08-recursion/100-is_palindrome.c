#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - check main.c
 * Description: This function checks if a string is a palindrome or not.
 *
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int l = strlen(s);

	if (l <= 1)
	{
		return (1);
	}

	return (is_checker(s, 0, l - 1));
}

/**
 * is_checker - a helper function that checks if a string is a palindrome.
 * @s: The string to be checked.
 * @start: the start of the string.
 * @end: the end of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 *
 */

int is_checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_checker(s, start + 1, end - 1));
}
