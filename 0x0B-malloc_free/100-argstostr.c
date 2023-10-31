#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: an integer argument
 * @av: a character argument
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, p;
	int l = 0;
	char *c;
	int length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			l += strlen(av[i]) + 1;
		}
	}

	c = (char *)malloc(l + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	p = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			length = strlen(av[i]);
			strcpy(c + p, av[i]);
			p += length;
			c[p] = '\n';
			p++;
		}
	}

	c[l] = '\0';

	return (c);
}
