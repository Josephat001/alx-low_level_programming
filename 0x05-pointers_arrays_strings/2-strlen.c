#include <stdio.h>
#include "main.h"

/**
 * _strlen - check 2-main.c
 * Description: This function prints the length of the string 's'
 * @s: the string whose length is to be printed
 *
 * Return: Always 0 (Success).
 */

int _strlen(char *s)
{
	int swap; 
	int len = 0;

	while (s[len])
	{
		len++;
		s++;
		return (len);

	}
}
