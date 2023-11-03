#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (dest);
}

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @old_size: size of old pointer
 * @new_size: size of new memory block
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * Return: the pointer that is reallocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	_memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
