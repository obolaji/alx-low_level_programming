#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: Always 0.
 */
int get_endianness(void)
{
	int test = 1;
	char *end = (char *)&test;

	if (*end)
		return (1);
	return (0);
}
