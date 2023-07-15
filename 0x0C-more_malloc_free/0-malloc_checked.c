#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: integer
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *al;

	al = malloc(b);

	if (al == NULL)
	{
		free(al);
		exit(98);
	}
	return (al);
}

