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
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
		dest[byteCount] = '\0';

	return (dest);
}
