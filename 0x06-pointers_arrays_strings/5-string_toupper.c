#include <stdio.h>
#include "main.h"

/**
 * string_toupper - check main
 * Description: this function changes all lowercase
 * letters of a string to uppercase.
 * @str: a string to be converted
 * Return: 0 upon success.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
