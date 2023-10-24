#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - check 4-main.c
 * Description: this function searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the character string to be searched for in 's'
 *
 * Return: pointer to the byte in 's' if successful, 'NULL' if otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;
	
	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}
		}
		a++;
	}
	return (NULL);
}
