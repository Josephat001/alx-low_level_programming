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


	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
