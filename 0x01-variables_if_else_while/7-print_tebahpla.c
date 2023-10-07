#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a';)
	{
		putchar(c);
		c--;
	}
		putchar('\n');
	
	return (0);
}
