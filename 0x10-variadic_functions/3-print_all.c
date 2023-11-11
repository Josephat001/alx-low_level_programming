#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the format to be printed
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int b = 0;
	char *str;
	int num;
	float f;
	char c;
	va_list pa;

	va_start(pa, format);
	while (format && format[b])
	{
		switch (format[b])
		{
			case 'c':
				c = va_arg(pa, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(pa, int);
				printf("%d", num);
				break;
			case 'f':
				f = va_arg(pa, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(pa, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
			default:
				break;
		}
		if (format[b + 1] != '\0' && (format[b] == 'c' || format[b] == 'i' || format[b] == 'f' || format[b] == 's'))
		{
			printf(", ");
		}

		b++;
	}
	printf("\n");
	va_end(pa);
}
