#include <stdio.h>
#include "main.h"

/**
 * rev_string - check 5-main.c
 * Description: This function reverses a string; 's'.
 * @s: the string to be reversed.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, c, temp;

	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	c = a - 1;

	while (c < b)
	{
		temp = s[c];
		s[c] = s[b];
		s[b] = temp;
		c++;
		b--;
	}
}
