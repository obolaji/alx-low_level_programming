#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: Always 0.
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *)&x;

	return ((int)*y);
}
