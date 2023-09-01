#include <stdio.h>
#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: integer
 * @index: integer
 *
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
