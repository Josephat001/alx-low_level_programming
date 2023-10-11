#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @i: The character to be checked
 *
 * Description: This function checks if the character 'i' is a lowercase letter
 *
 * Return: 1 if 'i' is lowercase, 0 otherwise.
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
