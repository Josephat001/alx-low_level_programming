#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @size: size of the array
 * @action: pointer to the function used
 * @array: the array with the parameters
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t b;

	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
