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
	return (n >> index) & 1;
}
