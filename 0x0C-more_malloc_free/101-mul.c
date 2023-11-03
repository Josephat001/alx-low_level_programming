#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if a string is a digit
 * @str: pointer to the string to be checked
 * Return: nothing
 */

int _isdigit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: integer to be checked
 * @argv: pointer to string to be checked
 * Return: result
 */

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	unsigned long int p;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!_isdigit(num1) || !_isdigit(num2))
	{
		printf("Error\n");
		return (98);
	}

	p = strtoul(num1, NULL, 10) * strtoul(num2, NULL, 10);

	printf("%lu\n", p);

	return (0);
}

