#include <stdio.h>
#include "main.h"

/**
 * clear_bit - value of a bit to 0 at a given index
 * @n: pointer
 * @index: integer
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~(i <<= index);
	return (1);
}
