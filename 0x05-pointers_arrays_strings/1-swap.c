#include <stdio.h>
#include "main.h"

/**
 * swap_int - check main
 * Description: This function swaps two integer, 'a' and 'b'.
 * @a: an integer to be swapped
 * @b: an integer to be swapped
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int swap;


	swap = *a;
	*b = swap;
	*a = *b;
}

