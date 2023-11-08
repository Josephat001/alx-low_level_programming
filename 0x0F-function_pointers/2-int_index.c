#ifndef INT_INDEX_H
#define INT_INDEX_H

#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be searched
 * @size: the number of elements in the array 'array'
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 upon success, or -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (size <= 0)
	{
		return (-1);
	}

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]) != 0)
		{
			return (b);
		}
	}

	return (-1);
}

#endif
