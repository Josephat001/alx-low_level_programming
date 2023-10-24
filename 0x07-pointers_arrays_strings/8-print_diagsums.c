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

int D1 = 0;
int D2 = 0;
int row, i;

for (row = 0; row < size; row++)
{
i = (row * size) + row;
D1 += a[i];
}

for (row = 1; row <= size; row++)
{
i = (row * size) - row;
D2 += a[i];
}

printf("%d, %d\n", D1, D2);

}
