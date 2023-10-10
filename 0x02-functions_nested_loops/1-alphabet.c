#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase.
 *
 * Description: This function uses the _putchar function to print
 * each letter of the alphabet in lowercase, followed by a new line.
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
