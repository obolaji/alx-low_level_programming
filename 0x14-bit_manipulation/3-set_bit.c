#include <stdio.h>
#include "main.h"

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

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i <<= index;

	*n |= i;
	return (1);
}