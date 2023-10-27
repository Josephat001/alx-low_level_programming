#include <stdio.h>
#include "main.h"

/**
* main - this function prints the  name of program
* @argc: the argument counter
* @argv: the pointer to array of arguments
* Return: always 0 upon success
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
