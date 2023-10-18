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
	char *result = dest;

	while
		(*dest != '\0');
	{
		dest++;
	}

	while
		(*src != '\0' && n > 0);
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
