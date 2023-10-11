#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check main
 * @n: an integer input
 * Description: This function prints numbers to 98
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
