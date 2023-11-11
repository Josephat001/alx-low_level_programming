#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	int num;
	va_list pa;

	va_start(pa, n);
	for (b = 0; b < n; b++)
	{
		num = va_arg(pa, int);
		printf("%d", num);
		
		if (b < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(pa);
}
