#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char b = 'ia';

	while (b <= 'z')
	{
		putchar (b);
		b++;
	}
	putchar ('\n');
	return (0);
}
