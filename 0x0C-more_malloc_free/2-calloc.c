#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *al;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	al = malloc(nmemb * size);

	if (al == NULL)
	{
		return (NULL);
	}

	for (i = o; i < nmemb * size; i++)
	{
		al[i] = 0;
	}
	return (al);
}
