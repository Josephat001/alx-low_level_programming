#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b: integer to br allocated memory
 *
 * Return: pointer to the allocated memory, 98 if it fails.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
