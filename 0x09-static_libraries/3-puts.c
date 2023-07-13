#include "main.h"
#include <stdio.h>

/**
 * _puts  - prints a string to stdout, followed by a new line
 * @str: points to the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
