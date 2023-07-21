#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list input_i;
	char *j;

	va_start(input_i, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(input_i, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);

		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	va_end(input_i);
	printf("\n");
}
