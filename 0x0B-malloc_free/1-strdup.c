#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - this function duplicates a given string
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string, 0 otherwise.
 */

char *_strdup(char *str)
{
	int i, length;
	char *duplicate;


	if (str == NULL)
	{
		return (NULL);
	}


	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc(length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0'; /* Null-terminate the duplicated string */

	return (duplicate);
}
