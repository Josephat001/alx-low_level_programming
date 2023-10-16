#include <stdio.h>

/**
 * main - function prints largest prime factor.
 * Return: Always 0 (Succes).
 */

int main(void)
{
	long int n, y;

	n = 612852475143;
	for (y = 2; y <= n; y++)
	{
		if (n % y == 0)
		{
			n /= y;
			y--;
		}
	}
	printf("%ld\n", y);
	return (0);
}
