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
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	if (num != '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
