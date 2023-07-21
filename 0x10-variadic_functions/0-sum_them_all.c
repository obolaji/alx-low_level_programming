#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number or arguments
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list input_i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(input_i, n);
	for (i = 0; i < n; i++)
		sum += va_arg(input_i, int);
	va_end(input_i);
	return (sum);
}


