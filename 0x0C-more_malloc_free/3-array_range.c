#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the first array
 * @max: the second array
 * Return: pointer to the newly created array, NULL if it fails
 */

int *array_range(int min, int max)
{
	int i;
	int l = max - min + 1;
	int *p = malloc(l * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
