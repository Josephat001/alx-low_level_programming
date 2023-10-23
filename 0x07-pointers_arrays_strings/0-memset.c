#include <stdio.h>
#include "main.h"

/**
 * _memset - check main.h
 * Description: This function fills memory with a consant byte
 * @s: a pointer pointing to 'n'
 * @b: the constant byte
 * @n: bytes of the memory area pointed to by 's'
 *
 * Return: a pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size = n;

	for (i = 0; i < size; i++)
	{
		s[i] = b;
	}
	return (s);
}

