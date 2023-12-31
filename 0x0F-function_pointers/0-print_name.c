#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name string to be printed
 * @f: pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

#endif
