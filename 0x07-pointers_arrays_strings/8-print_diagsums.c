#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - check main.h
 * Description: this function prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: pointer to the square matrix
 * @size: the size of 'a'
 *
 * Return: always 0 upon success
 */

void print_diagsums(int *a, int size)
{
	int i;
	int D1, D2;

	for (i = 0; i < size; i++)
	{
		D1 += a[i * size + i];
		D2 += a[i * size + (size - i - 1)];
	}
	_putchar(D1);
	_putchar(D2);
}
