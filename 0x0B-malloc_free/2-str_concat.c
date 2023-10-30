#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new allocated space, 0 otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int l1 = 0;
	int l2 = 0;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l2] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	concatenated = (char *)malloc(l1 + l2 + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l2; i++)
	{
		concatenated[l1 + 1] = s2[i];
	}
	concatenated[l1 + l2] = '\0';
	return (concatenated);
}

