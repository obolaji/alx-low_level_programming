#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an intege
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	if (i > 0)
		return (i);
	else
		return (0);
}
