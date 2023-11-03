#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the array to be allocated memory
 * @size: size of bytes to be allocated
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int l = nmemb * size;
	void *p = malloc(l);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		*((char *)p + i) = 0;
	}

	return (p);
}
