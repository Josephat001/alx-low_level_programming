#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - this program multiplies two numbers
 * @argc: the argument counter
 * @argv: the pointer to the two numbers to be multiplied
 *
 * Return: 1 when only one or no number is entered, otherwise 0.
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}




