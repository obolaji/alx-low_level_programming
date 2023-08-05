#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int j = 0;

	while (i)
	{
		if (i & 1)
			j++;
		i >>= 1;
	}
	return (j);
}
