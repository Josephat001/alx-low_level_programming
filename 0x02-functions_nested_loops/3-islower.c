#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @ch: The character to be checked
 *
 * Description: This function checks if the character 'ch' is a lowercase letter.
 *
 * Return: 1 if 'ch' is lowercase, 0 otherwise.
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
