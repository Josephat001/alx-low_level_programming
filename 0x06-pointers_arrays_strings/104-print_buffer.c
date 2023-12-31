#include <stdio.h>
#include "main.h"

/**
 * print_buffer - this function prints a buffer,
 * printing the content of 'size' bytes of the buffer pointed by 'b'
 * @b: buffer to print
 * @size: bytes of buffer to print
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			printf(b, 9, i);
		}
		else
		{
			printf(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
	{
		putchar('\n');
	}
}
