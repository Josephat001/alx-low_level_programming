#include <stdio.h>
#include "main.h"

/**
 * print_array - check 8-main.c
 * Description: This function prints 'n' elements of an array of integers
 * @n: elements of an array of integers to be printed
 * @a: an array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		printf("%d", a[i]);
		else
		printf("%d", a[i]);
	}
	printf("\n");
}
