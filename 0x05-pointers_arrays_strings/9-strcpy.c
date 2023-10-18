#include <stdio.h>
#include "main.h"

/**
 * _strcpy - check 9-main.c
 * Description: This function copies the string pointed to by 'src'
 * to the buffer pointed to by 'dest'
 * @src: a pointer
 * @dest: a pointer
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while ((i == 0) && (i < len))
		
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
