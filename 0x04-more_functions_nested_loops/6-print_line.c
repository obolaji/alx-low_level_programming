#include "main.h"
#include <stdio.h>

/**
 * print_line - print a line
 * @n: number of lines
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
