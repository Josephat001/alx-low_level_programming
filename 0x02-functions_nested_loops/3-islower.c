#include "main.h"

/**
 * main - _islower check lowercase
 * Description: This function checks whether the alphabet is in lowercase.
 * Return: 0 or 1.
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
