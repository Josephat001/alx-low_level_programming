#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - check 7-main.c
 * Description: this function print the chessboard
 * @a: the row
 *
 * Return: always (0) upon success
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}
}

