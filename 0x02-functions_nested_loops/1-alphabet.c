#include <unistd.h>
#include "main.h"

/**
 * main - prints lowwercase alphabet
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
