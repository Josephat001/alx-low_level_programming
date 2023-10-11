##include "main.h"

/**
 * print_alphabet_x10 - No entry point
 *
 * Return: On success Nothing.
 */

void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
