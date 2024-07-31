#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit of a number
 * @i: integer
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (n < 0)
		n *= -1;

	_putchar (n + '0');

	return (n);
}
