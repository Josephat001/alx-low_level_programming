#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 prints the alphabet in lowercase for 10 times.
 *
 * Return: Nothing (Success)
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
			_putchar('\n');
	}
}
