#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to string and char
 *
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 1, l = 0, k;

	k = strlen(b);

	if (b == NULL)
		return (0);
	for (i = k - 1; i >= 0; i--)
	{
		if (b[i] !=  48 && b[i] != 49)
			return (0);

		if (b[i] == 49)
		{
			l += j;
		}
			j <<= 1;
	}
	return (l);
}
