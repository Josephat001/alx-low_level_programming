#include <stdio.h>
#include "main.h"

/**
 * _strncat - check main
 * Description: This function concatenates two strings while using some 'n'
 * bytes from the pointer to the source string
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: number of bytes from the pointer to the source string
 * Return: 0 upon success.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, len;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (len = 0; len < n && src[len] != '\0'; len++, length++)
	{
		dest[length] = src[len];
	}
	dest[length] = '\0';
	return (dest);
}
