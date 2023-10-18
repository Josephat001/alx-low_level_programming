#include <stdio.h>
#include "main.h"

/**
 * _strcpy - check 9-main.c
 * Description: This function copies the string pointed to by 'src'
 * to the buffer pointed to by 'dest'
 * @src: a pointer
 * @dest: a pointer
 * Return: a string of character if successful 
 */

char *_strcpy(char *dest, char *src)
{
      int len;
      int i;
	
	while (src[len] != '\0' )
	{
		len++;
	}
	
	for(i = 0; i < len ; i++)
	{ 
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return(dest);
} 
