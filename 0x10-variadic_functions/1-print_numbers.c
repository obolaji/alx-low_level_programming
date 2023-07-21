#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list input_i;

	va_start(input_i, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(input_i, int));
		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(input_i);
	printf("\n");
}
