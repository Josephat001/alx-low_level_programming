#include <stdio.h>
#include "main.h"


/**
 * main - this program prints all arguments it receives
 * @argc: the argument counter
 * @argv: the pointer to array of arguments
 * Return: always 0 upon success
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
