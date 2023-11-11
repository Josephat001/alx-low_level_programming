#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the format to be printed
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int b = 0;
	char *str, *separator = "";
	va_list pa;

	va_start(pa, format);
	if (format)
	{
		while (format[b])
		{
			switch (format[b])
			{
				case 'c':
					printf("%s%c", separator, va_arg(pa, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(pa, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(pa, double));
					break;
				case 's':
					str = va_arg(pa, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					b++;
					continue;
			}
			separator = ", ";
			b++;
		}
	}
	printf("\n");
	va_end(pa);
}
