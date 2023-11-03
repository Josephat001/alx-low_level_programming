#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the source string
 * @s2: pointer to the destination string
 * @n: first bytes of s2
 * Return: pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_length = 0, s2_length = 0, length_result;
	unsigned int a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}
	while (s2[s2_length] != '\0')
	{
		s2_length++;
	}
	if (n >= s2_length)
	{
		n = s2_length;
	}
	length_result = s1_length + n;
	concat = malloc((length_result + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < s1_length; a++)
	{
		concat[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		concat [a + b] = s2[b];
	}
	concat[a + b] = '\0';
	return (concat);
}
