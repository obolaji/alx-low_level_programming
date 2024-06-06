#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i = 61;

	while (i <= 79)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
