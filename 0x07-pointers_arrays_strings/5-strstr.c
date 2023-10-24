#include <stdio.h>
#include "main.h"

/**
 * _strstr - check 5-main.c
 * Description: this function locates a sunstring
 * @haystack: pointer to the string to be looked into
 * @needle: pointer to the substring to be located
 *
 * Return: pointer to the located substring if successful, 'NULL' if otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h != '\0')
	{
		char *current_h = h;
		char *current_n = n;

		while (current_n != '\0' && *current_h == current_n)
		{
			*current_h++;
			current_n++;
		}

		if (current_n == '\0')
		{
			return (h);
		}

		h++;
	}

	return (NULL);
}
