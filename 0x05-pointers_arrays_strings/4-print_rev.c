#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s:n string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
