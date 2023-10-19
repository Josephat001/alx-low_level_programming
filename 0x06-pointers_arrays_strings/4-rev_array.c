#include <stdio.h>
#include "main.h"

/**
 * reverse_array - check main
 * Description: this function reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
