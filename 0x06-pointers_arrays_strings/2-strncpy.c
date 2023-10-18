#include <stdio.h>
#include "main.h"

/**
 * _strncpy - this function copies a string
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: number of bytes to the pointer
 * Return: 0 on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
