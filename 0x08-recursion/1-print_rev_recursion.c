#include "main.h"
#include "stdio.h"

/**
 * _print_rev_recursion - puts string in reverse
 * @s: parameter
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
