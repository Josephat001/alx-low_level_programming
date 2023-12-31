#include "main.h"

/**
 * print_number - check main.
 * Description: This function prints an integer.
 * @n: an input integer.
 * Return: nothing.
 */

void print_number(int n)
{
	unsigned int m, p, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	p = m;
	count = 1;

	while (p > 9)
	{
		p /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
