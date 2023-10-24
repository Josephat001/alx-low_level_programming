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
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}

		_putchar('\n');
	}
}

