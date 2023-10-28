#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the number of arguments passed into it.
 * @argc: the argument counter
 * @argv: the pointer to the argument
 *
 * Return: always 0 upon success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
