#include <stdio.h>
#include "main.h"

/**
 * print_line - this function prints a buffer,
 * printing the content of 'size' bytes of the buffer pointed by 'b'
 * @b: buffer to print
 * @size: bytes of buffer to print
 * @line: line of buffer to print
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
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
