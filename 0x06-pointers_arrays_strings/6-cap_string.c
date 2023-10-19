#include <stdio.h>
#include "main.h"
/**
 * cap_string - check main
 * Description: This function capitalizes every first letter of a word in a string.
 * separators of words are:  space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }.
 * @str: pointer to string.
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (str[c] == ' ' || str[c] == '\t' || str[c] == '\n'
		    || str[c] == ',' || str[c] == ';' || str[c] == '.'
		    || str[c] == '.' || str[c] == '!' || str[c] == '?'
		    || str[c] == '"' || str[c] == '(' || str[c] == ')'
		    || str[c] == '{' || str[] == '}')
		{
			if (str[c + 1] >= 97 && str[c + 1] <= 122)
			{
				str[c + 1] = str[c + 1] - 32;
			}
		}
		c++;
	}
	return (str);
}
