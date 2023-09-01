#include "main.h"
#include <stdio.h>

/**
 * set_bit - value of a bit to 1 at a given index
 * @n: pointer
 * @index: integer
 *
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= i << index;
	return (1);
}
