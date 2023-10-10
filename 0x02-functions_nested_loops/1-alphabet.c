#include <unistd.h>
#include "main.h"

/**
 * main - prints description.
 *Description: function prints the alphabet in lowercase.
 *
 * Return: Nothing (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
