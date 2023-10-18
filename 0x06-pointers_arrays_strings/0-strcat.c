#include <stdio.h>
#include "main.h"

/**
 * _strcat - This function concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: 0 upon success
 */

char *_strcat(char *dest, char *src)
{
	int length, len;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (len = 0; src[len] != '\0'; len++, length++)
	{
		dest[length] = src[len];
	}
	dest[length] = '\0';
	return (dest);
}
