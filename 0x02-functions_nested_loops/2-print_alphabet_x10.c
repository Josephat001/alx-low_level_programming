#include "main.h"

/**
 * print_alphabet_x10 prints the alphabet.
 * Description: This function prints the alphabet in lowercase for 10 times.
 * Return: Nothing (Success)
 */

void print_alphabet_x10(void)
{
	char xy;
	int i;
	for (int i = 0; i < 10; i++)
	{
		for (char xy = 'a'; xy <= 'z'; xy++)
		{
			_putchar(xy);
		}
			_putchar('\n');
	}
}
