#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: integer
 *
 * Return: Always 0.
 *
 *
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
